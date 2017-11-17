#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"

using namespace std;

#ifndef NONBENDER_H
#define NONBENDER_H
class NonBender : Persona{
	protected:
		string TrabajoLaboral;
		int Fuerza;
		int Velocidad;
	public:
		NonBender(string,string,int,string,string,int,int);
		NonBender(string,int,int);
		NonBender();
		string getTrabajoLaboral();
		void setTrabajoLaboral(string);

		int getFuerza();
		void setFuerza(int);

		int getVelocidad();
		void setVelocidad(int);

};
#endif