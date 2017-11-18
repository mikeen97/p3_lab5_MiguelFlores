#include "InvocacionMascota.h"

InvocacionMascota::InvocacionMascota(string Nombrep,int NivelPoder,string Nombre,string Especie,string Habilidad,string TipoMascota):PoderEspecial(Nombrep,NivelPoder){
	this->Nombre=Nombre;
	this->Especie=Especie;
	this->Habilidad=Habilidad;
	this->TipoMascota=TipoMascota;
}
InvocacionMascota::InvocacionMascota(){

}void InvocacionMascota::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string InvocacionMascota::getNombre(){
   return Nombre;
}
void InvocacionMascota::setEspecie(string Especie){
   this-> Especie=Especie;
}
string InvocacionMascota::getEspecie(){
   return Especie;
}
void InvocacionMascota::setHabilidad(string Habilidad){
   this-> Habilidad=Habilidad;
}
string InvocacionMascota::getHabilidad(){
   return Habilidad;
}
void InvocacionMascota::setTipoMascota(string TipoMascota){
   this-> TipoMascota=TipoMascota;
}
string InvocacionMascota::getTipoMascota(){
   return TipoMascota;
}
