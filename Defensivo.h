#include <iostream>
#include <string>
#include <vector>
#include "PoderEspecial.h"

using namespace std;

#ifndef DEFENSIVO_H
#define DEFENSIVO_H
class Defensivo :public PoderEspecial{
	protected:
		int Resistencia;
		int Duracion;
	public:
		Defensivo(string,int,int,int);
		Defensivo(int,int);
		Defensivo();
		int getResistencia();
		void setResistencia(int);

		int getDuracion();
		void setDuracion(int);

};
#endif