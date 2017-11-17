#include "WaterBender.h"


WaterBender::WaterBender(string NacionOrigen,string Nombre,int Edad,string Sexo,string TribuOrigen,string ArmaPreferida,PoderEspecial* Poder):Persona(NacionOrigen, Nombre,Edad,Sexo){
	this->TribuOrigen=TribuOrigen;
	this->ArmaPreferida=ArmaPreferida;
	this->Poder=Poder;
}
WaterBender::WaterBender(){

}void WaterBender::setTribuOrigen(string TribuOrigen){
   this-> TribuOrigen=TribuOrigen;
}
string WaterBender::getTribuOrigen(){
   return TribuOrigen;
}
void WaterBender::setArmaPreferida(string ArmaPreferida){
   this-> ArmaPreferida=ArmaPreferida;
}
string WaterBender::getArmaPreferida(){
   return ArmaPreferida;
}
void WaterBender::setPoder(PoderEspecial* Poder){
   this-> Poder=Poder;
}
PoderEspecial* WaterBender::getPoder(){
   return Poder;
}
