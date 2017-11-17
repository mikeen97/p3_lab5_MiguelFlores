#include "Defensivo.h"

Defensivo::Defensivo(string Nombre,int NivelPoder,int Resistencia,int Duracion):PoderEspecial(Nombre,NivelPoder){
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
