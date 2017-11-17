#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H
class Persona{
	protected:
		string NacionOrigen;
		string Nombre;
		int Edad;
		string Sexo;
	public:
		Persona(string,string,int,string);
		Persona();
		string getNacionOrigen();
		void setNacionOrigen(string);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		string getSexo();
		void setSexo(string);

};
#endif