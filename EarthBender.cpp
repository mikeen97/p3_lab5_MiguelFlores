#include "EarthBender.h"


EarthBender::EarthBender(string NacionOrigen,string Nombre,int Edad,string Sexo,int CantidadColas,int GraduacionOjos,PoderEspecial* Poder):Persona(NacionOrigen, Nombre,Edad,Sexo){
	this->CantidadColas=CantidadColas;
	this->GraduacionOjos=GraduacionOjos;
	this->Poder=Poder;
}
EarthBender::EarthBender(){

}void EarthBender::setCantidadColas(int CantidadColas){
   this-> CantidadColas=CantidadColas;
}
int EarthBender::getCantidadColas(){
   return CantidadColas;
}
void EarthBender::setGraduacionOjos(int GraduacionOjos){
   this-> GraduacionOjos=GraduacionOjos;
}
int EarthBender::getGraduacionOjos(){
   return GraduacionOjos;
}
void EarthBender::setPoder(PoderEspecial* Poder){
   this-> Poder=Poder;
}
PoderEspecial* EarthBender::getPoder(){
   return Poder;
}
