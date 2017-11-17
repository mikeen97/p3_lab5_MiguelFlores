#include <iostream>
#include <string>
#include <vector>
#include "PoderEspecial.h"

using namespace std;

#ifndef OFENSIVO_H
#define OFENSIVO_H
class Ofensivo : PoderEspecial{
	protected:
		int Rango;
		int Fuerza;
	public:
		Ofensivo(string,int,int,int);
		Ofensivo(int,int);
		Ofensivo();
		int getRango();
		void setRango(int);

		int getFuerza();
		void setFuerza(int);

};
#endif