#include "GestorDeEventos.h"
#include "Evento.h"
#include <memory>

using namespace std;

int main()
{
    GestorDeEventos event_mgt;

    shared_ptr<Evento> e1 = make_shared<Evento>("11-09-2026", "Primer Evento");
    shared_ptr<Evento> e2 = make_shared<Evento>("12-09-2026", "Segundo Evento");
    shared_ptr<Evento> e3 = make_shared<Evento>("13-09-2026", "Tercer Evento");
    
    event_mgt.AddEvent(e1);
    event_mgt.AddEvent(e2);
    event_mgt.AddEvent(e3);
    event_mgt.ListEvents();
}