#include "Curativo.h"

Curativo::Curativo(string Nombre,int NivelPoder,string TIpoCuracion):PoderEspecial(Nombre,NivelPoder){
	this->TIpoCuracion=TIpoCuracion;
}
Curativo::Curativo(){

}void Curativo::setTIpoCuracion(string TIpoCuracion){
   this-> TIpoCuracion=TIpoCuracion;
}
string Curativo::getTIpoCuracion(){
   return TIpoCuracion;
}
