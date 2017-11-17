#include "PoderEspecial.h"

PoderEspecial::PoderEspecial(string Nombre,int NivelPoder):PoderEspecial(Nombre,NivelPoder){
	this->Nombre=Nombre;
	this->NivelPoder=NivelPoder;
}
PoderEspecial::PoderEspecial(){

}void PoderEspecial::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string PoderEspecial::getNombre(){
   return Nombre;
}
void PoderEspecial::setNivelPoder(int NivelPoder){
   this-> NivelPoder=NivelPoder;
}
int PoderEspecial::getNivelPoder(){
   return NivelPoder;
}
