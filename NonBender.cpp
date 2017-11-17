#include "NonBender.h"

NonBender::NonBender(string NacionOrigen,string Nombre,int Edad,string Sexo,string TrabajoLaboral,int Fuerza,int Velocidad):Persona(NacionOrigen, Nombre,Edad,Sexo){
	this->TrabajoLaboral=TrabajoLaboral;
	this->Fuerza=Fuerza;
	this->Velocidad=Velocidad;
}
NonBender::NonBender(){

}void NonBender::setTrabajoLaboral(string TrabajoLaboral){
   this-> TrabajoLaboral=TrabajoLaboral;
}
string NonBender::getTrabajoLaboral(){
   return TrabajoLaboral;
}
void NonBender::setFuerza(int Fuerza){
   this-> Fuerza=Fuerza;
}
int NonBender::getFuerza(){
   return Fuerza;
}
void NonBender::setVelocidad(int Velocidad){
   this-> Velocidad=Velocidad;
}
int NonBender::getVelocidad(){
   return Velocidad;
}
