#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "PoderEspecial.h"

using namespace std;

#ifndef AIRBENDER_H
#define AIRBENDER_H

class AirBender : public Persona{
	protected:
		int CantidadPelo;
		string ColorFlechas;
		PoderEspecial* Poder;
	public:
		AirBender(string,string,int,string,int,string,PoderEspecial*);
		AirBender(int,string,PoderEspecial*);
		AirBender();
		int getCantidadPelo();
		void setCantidadPelo(int);

		string getColorFlechas();
		void setColorFlechas(string);

		PoderEspecial* getPoder();
		void setPoder(PoderEspecial*);

};
#endif
