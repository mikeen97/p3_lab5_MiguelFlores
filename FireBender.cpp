#include "FireBender.h"


FireBender::FireBender(string NacionOrigen,string Nombre,int Edad,string Sexo,int NumeroCicatrices,int NumeroVictorias,PoderEspecial* Poder):Persona(NacionOrigen, Nombre,Edad,Sexo){
	this->NumeroCicatrices=NumeroCicatrices;
	this->NumeroVictorias=NumeroVictorias;
	this->Poder=Poder;
}
FireBender::FireBender(){

}void FireBender::setNumeroCicatrices(int NumeroCicatrices){
   this-> NumeroCicatrices=NumeroCicatrices;
}
int FireBender::getNumeroCicatrices(){
   return NumeroCicatrices;
}
void FireBender::setNumeroVictorias(int NumeroVictorias){
   this-> NumeroVictorias=NumeroVictorias;
}
int FireBender::getNumeroVictorias(){
   return NumeroVictorias;
}
void FireBender::setPoder(PoderEspecial* Poder){
   this-> Poder=Poder;
}
PoderEspecial* FireBender::getPoder(){
   return Poder;
}
