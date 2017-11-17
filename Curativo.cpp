#include "Curativo.h"

Curativo::Curativo(string TIpoCuracion){
	this->TIpoCuracion=TIpoCuracion;
}
Curativo::Curativo(){

}void Curativo::setTIpoCuracion(string TIpoCuracion){
   this-> TIpoCuracion=TIpoCuracion;
}
string Curativo::getTIpoCuracion(){
   return TIpoCuracion;
}
