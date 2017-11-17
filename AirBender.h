#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "PoderEspecial.h"

using namespace std;

#ifndef AIRBENDER_H
#define AIRBENDER_H

class AirBender : Persona{
	protected:
		int CantidadPelo;
		int ColorFlechas;
		PoderEspecial* Poder;
	public:
		AirBender(string ,string ,int,string,int,int,PoderEspecial*);
		AirBender(int,int,PoderEspecial*);
		AirBender();
		int getCantidadPelo();
		void setCantidadPelo(int);

		int getColorFlechas();
		void setColorFlechas(int);

		PoderEspecial* getPoder();
		void setPoder(PoderEspecial*);

};
#endif
