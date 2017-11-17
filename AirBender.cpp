#include "AirBender.h"
AirBender::AirBender(string NacionOrigen,string Nombre,int Edad,string Sexo,int CantidadPelo,int ColorFlechas,PoderEspecial* Poder):Persona(NacionOrigen, Nombre,Edad,Sexo){
	this->CantidadPelo=CantidadPelo;
	this->ColorFlechas=ColorFlechas;
	this->Poder=Poder;
}

AirBender::AirBender(){

}
void AirBender::setCantidadPelo(int CantidadPelo){
   this-> CantidadPelo=CantidadPelo;
}

int AirBender::getCantidadPelo(){
   return CantidadPelo;
}

void AirBender::setColorFlechas(int ColorFlechas){
   this-> ColorFlechas=ColorFlechas;
}

int AirBender::getColorFlechas(){
   return ColorFlechas;
}

void AirBender::setPoder(PoderEspecial* Poder){
   this-> Poder=Poder;
}

PoderEspecial* AirBender::getPoder(){
   return Poder;
}
