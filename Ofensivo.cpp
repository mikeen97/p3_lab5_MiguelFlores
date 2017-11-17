#include "Ofensivo.h"

Ofensivo::Ofensivo(string Nombre,int NivelPoder,int Rango,int Fuerza):PoderEspecial(Nombre,NivelPoder){
	this->Rango=Rango;
	this->Fuerza=Fuerza;
}
Ofensivo::Ofensivo(){

}void Ofensivo::setRango(int Rango){
   this-> Rango=Rango;
}
int Ofensivo::getRango(){
   return Rango;
}
void Ofensivo::setFuerza(int Fuerza){
   this-> Fuerza=Fuerza;
}
int Ofensivo::getFuerza(){
   return Fuerza;
}
