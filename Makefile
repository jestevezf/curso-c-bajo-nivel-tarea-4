all: main.o GestorDeEventos.o Evento.o
		g++ Evento.o GestorDeEventos.o main.o -o main

main.o: main.cpp
		g++ -c main.cpp

GestorDeEventos.o: GestorDeEventos.h GestorDeEventos.cpp
		g++ -c GestorDeEventos.cpp

Evento.o: Evento.h Evento.cpp
		g++ -c Evento.cpp

clean:
		rm -rf *.o
		rm -rf main