#include "Evento.h"

Evento::Evento(std::string date, std::string title): _date(date), _title(title), _next(NULL) {}

void Evento::setDate(std::string date) 
{
    _date = date;
}

void Evento::setTitle(std::string title)
{
    _title = title;
}

std::string Evento::getDate()
{
    return _date;
}

std::string Evento::getTitle()
{
    return _title;
}

void Evento::setNextEvent(std::shared_ptr<Evento> next_event) 
{
    _next = next_event;
}

std::shared_ptr<Evento> Evento::getNextEvent()
{
    return _next;
}