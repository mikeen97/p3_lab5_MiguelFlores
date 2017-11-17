#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "PoderEspecial.h"

using namespace std;

#ifndef WATERBENDER_H
#define WATERBENDER_H
class WaterBender : Persona{
	protected:
		string TribuOrigen;
		string ArmaPreferida;
		PoderEspecial* Poder;
	public:
		WaterBender(string ,string ,int,string,string,string,PoderEspecial*);
		WaterBender(string,string,PoderEspecial*);
		WaterBender();
		string getTribuOrigen();
		void setTribuOrigen(string);

		string getArmaPreferida();
		void setArmaPreferida(string);

		PoderEspecial* getPoder();
		void setPoder(PoderEspecial*);

};
#endif
