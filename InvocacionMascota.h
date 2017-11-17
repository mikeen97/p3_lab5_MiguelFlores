#include <iostream>
#include <string>
#include <vector>
#include "PoderEspecial.h"

using namespace std;

#ifndef INVOCACIONMASCOTA_H
#define INVOCACIONMASCOTA_H
class InvocacionMascota : PoderEspecial{
	protected:
		string Nombre;
		string Especie;
		string Habilidad;
		string TipoMascota;
	public:
		InvocacionMascota(string,int,string,string,string,string);
		InvocacionMascota(string,string,string,string);
		InvocacionMascota();
		string getNombre();
		void setNombre(string);

		string getEspecie();
		void setEspecie(string);

		string getHabilidad();
		void setHabilidad(string);

		string getTipoMascota();
		void setTipoMascota(string);

};
#endif