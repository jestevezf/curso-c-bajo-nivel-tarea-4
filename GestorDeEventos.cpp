#include "GestorDeEventos.h"
#include <memory>
#include <iostream>

using namespace std;

GestorDeEventos::GestorDeEventos(): _firstEvent(NULL), _lastEvent(NULL) {}

void GestorDeEventos::AddEvent(shared_ptr<Evento> e)
{
    if (_firstEvent == NULL) 
    {
        _firstEvent = e;
        _lastEvent = _firstEvent;
        return;
    }
    _lastEvent->setNextEvent(e);
    _lastEvent = e;
}

void GestorDeEventos::ListEvents()
{
    shared_ptr<Evento> iterator_ptr = getFirstEvent();
    
    cout << endl;
    while (iterator_ptr != NULL)
    {
        cout << "Fecha: " << iterator_ptr->getDate() << " | Titulo: " << iterator_ptr->getTitle() << endl;
        iterator_ptr = iterator_ptr->getNextEvent();
    }
    cout << endl;
}

void GestorDeEventos::setFirstEvent(std::shared_ptr<Evento> fe)
{
    _firstEvent = fe;
}

void GestorDeEventos::setLastEvent(std::shared_ptr<Evento> le)
{
    _lastEvent = le;
}

std::shared_ptr<Evento> GestorDeEventos::getFirstEvent()
{
    return _firstEvent;
}

std::shared_ptr<Evento> GestorDeEventos::getLastEvent()
{
    return _lastEvent;
}