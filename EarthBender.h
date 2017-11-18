#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "PoderEspecial.h"

using namespace std;

#ifndef EARTHBENDER_H
#define EARTHBENDER_H
class EarthBender : public  Persona{
	protected:
		int CantidadColas;
		int GraduacionOjos;
		PoderEspecial* Poder;
	public:
		EarthBender(string ,string ,int,string,int,int,PoderEspecial*);
		EarthBender(int,int,PoderEspecial*);
		EarthBender();
		int getCantidadColas();
		void setCantidadColas(int);

		int getGraduacionOjos();
		void setGraduacionOjos(int);

		PoderEspecial* getPoder();
		void setPoder(PoderEspecial*);

};
#endif
