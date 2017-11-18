main:    main.cpp Persona.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o PoderEspecial.o Ofensivo.o Defensivo.o Curativo.o InvocacionMascota.o 
	g++ main.cpp Persona.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o PoderEspecial.o Ofensivo.o Defensivo.o Curativo.o InvocacionMascota.o -o main
main.o:	main.cpp Persona.h AirBender.h FireBender.h WaterBender.h EarthBender.h NonBender.h PoderEspecial.h Ofensivo.h Defensivo.h Curativo.h InvocacionMascota.h 
	g++ -c -std=c++11 main.cpp
Persona:	Persona.cpp Persona.h
	g++ -c std=c++11 Persona.cppAirBender:	AirBender.cpp AirBender.h
	g++ -c -std=c++11 AirBender.cppFireBender:	FireBender.cpp FireBender.h
	g++ -c -std=c++11 FireBender.cppWaterBender:	WaterBender.cpp WaterBender.h
	g++ -c -std=c++11 WaterBender.cppEarthBender:	EarthBender.cpp EarthBender.h
	g++ -c -std=c++11 EarthBender.cppNonBender:	NonBender.cpp NonBender.h
	g++ -c -std=c++11 NonBender.cppPoderEspecial:	PoderEspecial.cpp PoderEspecial.h
	g++ -c -std=c++11 PoderEspecial.cppOfensivo:	Ofensivo.cpp Ofensivo.h
	g++ -c -std=c++11 Ofensivo.cppDefensivo:	Defensivo.cpp Defensivo.h
	g++ -c -std=c++11 Defensivo.cppCurativo:	Curativo.cpp Curativo.h
	g++ -c -std=c++11 Curativo.cppInvocacionMascota:	InvocacionMascota.cpp InvocacionMascota.h
	g++ -c -std=c++11 InvocacionMascota.cpp
clean:
	rm  *.o main 