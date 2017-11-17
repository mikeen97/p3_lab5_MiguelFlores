main:    main.cpp Persona.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o PoderEspecial.o Ofensivo.o Defensivo.o Curativo.o InvocacionMascota.o 
	g++ main.cpp Persona.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o PoderEspecial.o Ofensivo.o Defensivo.o Curativo.o InvocacionMascota.o -o main
main.o:	main.cpp Persona.h AirBender.h FireBender.h WaterBender.h EarthBender.h NonBender.h PoderEspecial.h Ofensivo.h Defensivo.h Curativo.h InvocacionMascota.h 
	g++ -c main.cpp
Persona:	Persona.cpp Persona.h
	g++ -c Persona.cppAirBender:	AirBender.cpp AirBender.h
	g++ -c AirBender.cppFireBender:	FireBender.cpp FireBender.h
	g++ -c FireBender.cppWaterBender:	WaterBender.cpp WaterBender.h
	g++ -c WaterBender.cppEarthBender:	EarthBender.cpp EarthBender.h
	g++ -c EarthBender.cppNonBender:	NonBender.cpp NonBender.h
	g++ -c NonBender.cppPoderEspecial:	PoderEspecial.cpp PoderEspecial.h
	g++ -c PoderEspecial.cppOfensivo:	Ofensivo.cpp Ofensivo.h
	g++ -c Ofensivo.cppDefensivo:	Defensivo.cpp Defensivo.h
	g++ -c Defensivo.cppCurativo:	Curativo.cpp Curativo.h
	g++ -c Curativo.cppInvocacionMascota:	InvocacionMascota.cpp InvocacionMascota.h
	g++ -c InvocacionMascota.cpp
clean:
	rm  *.o main 