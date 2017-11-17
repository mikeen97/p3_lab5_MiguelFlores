#include "Defensivo.h"

Defensivo::Defensivo(int Resistencia,int Duracion){
	this->Resistencia=Resistencia;
	this->Duracion=Duracion;
}
Defensivo::Defensivo(){

}void Defensivo::setResistencia(int Resistencia){
   this-> Resistencia=Resistencia;
}
int Defensivo::getResistencia(){
   return Resistencia;
}
void Defensivo::setDuracion(int Duracion){
   this-> Duracion=Duracion;
}
int Defensivo::getDuracion(){
   return Duracion;
}
