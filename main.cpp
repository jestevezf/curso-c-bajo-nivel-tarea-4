#include "GestorDeEventos.h"
#include "Evento.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{
    GestorDeEventos event_mgt;
    int chosen_option = 0;
    bool control = true;

    do
    {
        cout << endl << endl << "=============================================" << endl << endl;
        cout << "Por favor digite el número correspondiente a la acción que desea ejecutar: " << endl << endl;
        cout << "1) Agregar un nuevo evento" << endl;
        cout << "2) Listar todos los eventos" << endl;
        cout << "3) Salir del programa" << endl << endl;

        cout << "Opción (número): ";
        cin >> chosen_option;
        cout << endl;

        switch(chosen_option)
        {
            case 1:
            {
                string date;
                cout << "Introduzca la fecha del evento (DD-MM-YYYY): ";
                cin >> date;

                string title;
                cout << "Introduzca el titulo del evento: ";
                cin >> title;
                cout << endl << endl;

                shared_ptr<Evento> e = make_shared<Evento>(date, title);
                event_mgt.AddEvent(e);
                cout << "Evento agregado de manera exitosa." << endl;

                break;
            }

            case 2:
            {
                cout << "Listado de todos los eventos:" << endl;
                event_mgt.ListEvents();
                break;
            }

            case 3:
            {
                control = false;
                break;
            }

            default:
            {
                cout << "ERROR: Se introdujo una opción que no es válida." << endl;
                return -1;
            }
        }
    } while (control);
}