#pragma once

#include <string>
#include <memory>

class Evento
{
public:
    Evento(std::string date, std::string title);
    void setDate(std::string date);
    void setTitle(std::string title);
    std::string getDate();
    std::string getTitle();
    void setNextEvent(std::shared_ptr<Evento> next_event);
    std::shared_ptr<Evento> getNextEvent();
private:
    std::string _date;
    std::string _title;
    std::shared_ptr<Evento> _next;
};