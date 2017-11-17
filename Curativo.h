#include <iostream>
#include <string>
#include <vector>
#include "PoderEspecial.h"

using namespace std;

#ifndef CURATIVO_H
#define CURATIVO_H
class Curativo : PoderEspecial{
	protected:
		string TIpoCuracion;
	public:
		Curativo(string,int,string);
		Curativo(string);
		Curativo();
		string getTIpoCuracion();
		void setTIpoCuracion(string);

};
#endif
