#include "Persona.h"

Persona::Persona(string NacionOrigen,string Nombre,int Edad,string Sexo){
	this->NacionOrigen=NacionOrigen;
	this->Nombre=Nombre;
	this->Edad=Edad;
	this->Sexo=Sexo;
}
Persona::Persona(){

}void Persona::setNacionOrigen(string NacionOrigen){
   this-> NacionOrigen=NacionOrigen;
}
string Persona::getNacionOrigen(){
   return NacionOrigen;
}
void Persona::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string Persona::getNombre(){
   return Nombre;
}
void Persona::setEdad(int Edad){
   this-> Edad=Edad;
}
int Persona::getEdad(){
   return Edad;
}
void Persona::setSexo(string Sexo){
   this-> Sexo=Sexo;
}
string Persona::getSexo(){
   return Sexo;
}
