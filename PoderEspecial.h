#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PODERESPECIAL_H
#define PODERESPECIAL_H
class PoderEspecial{
	protected:
		string Nombre;
		int NivelPoder;
	public:
		PoderEspecial(string,int);
		PoderEspecial();
		string getNombre();
		void setNombre(string);

		int getNivelPoder();
		void setNivelPoder(int);

};
#endif