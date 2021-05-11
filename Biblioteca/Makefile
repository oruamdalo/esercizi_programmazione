Biblioteca: Biblioteca.o Pubblicazione.o Libro.o ArticoloR.o ArticoloC.o Rivista.o Convegno.o
	g++ Biblioteca.o Pubblicazione.o Libro.o Rivista.o ArticoloR.o -o Biblioteca
Biblioteca.o: Biblioteca.cpp Pubblicazione.h Libro.h ArticoloR.h ArticoloC.h Functions.h
	g++ -c Biblioteca.cpp --std=c++11 -Wall -pedantic -o Biblioteca.o
Pubblicazione.o: Pubblicazione.cpp Pubblicazione.h
	g++ -c Pubblicazione.cpp --std=c++11 -Wall -pedantic -o Pubblicazione.o
Libro.o: Libro.cpp Libro.h
	g++ -c Libro.cpp --std=c++11 -Wall -pedantic -o Libro.o
Rivista.o: Rivista.cpp Rivista.h
	g++ -c Rivista.cpp --std=c++11 -Wall -pedantic -o Rivista.o
Convegno.o: Convegno.cpp Convegno.h
	g++ -c Convegno.cpp --std=c++11 -Wall -pedantic -o Convegno.o
ArticoloR.o: ArticoloR.cpp ArticoloR.h Rivista.h Pubblicazione.h
	g++ -c ArticoloR.cpp --std=c++11 -Wall -pedantic -o ArticoloR.o
ArticoloC.o: ArticoloC.cpp ArticoloC.h Convegno.h Pubblicazione.h
	g++ -c ArticoloC.cpp --std=c++11 -Wall -pedantic -o ArticoloC.o

#Rivista.o Convegno.o ArticoloR.o ArticoloC.o