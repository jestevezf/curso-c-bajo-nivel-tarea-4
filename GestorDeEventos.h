#pragma once

#include "Evento.h"
#include <memory>

class GestorDeEventos
{
public:
    GestorDeEventos();
    void AddEvent(std::shared_ptr<Evento> e);
    void ListEvents();
    void setFirstEvent(std::shared_ptr<Evento> fe);
    void setLastEvent(std::shared_ptr<Evento> le);
    std::shared_ptr<Evento> getFirstEvent();
    std::shared_ptr<Evento> getLastEvent();
private:
    std::shared_ptr<Evento> _firstEvent;
    std::shared_ptr<Evento> _lastEvent;
};