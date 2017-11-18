#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "PoderEspecial.h"

using namespace std;

#ifndef FIREBENDER_H
#define FIREBENDER_H
class FireBender : public  Persona{
	protected:
		int NumeroCicatrices;
		int NumeroVictorias;
		PoderEspecial* Poder;
	public:
		FireBender(string ,string ,int,string,int,int,PoderEspecial*);
		FireBender(int,int,PoderEspecial*);
		FireBender();
		int getNumeroCicatrices();
		void setNumeroCicatrices(int);

		int getNumeroVictorias();
		void setNumeroVictorias(int);

		PoderEspecial* getPoder();
		void setPoder(PoderEspecial*);

};
#endif
