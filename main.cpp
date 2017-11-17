#include <iostream>
#include <string>
#include "Persona.h"
#include "PoderEspecial.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "InvocacionMascota.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "NonBender.h"

using namespace std;

int main(){
	//mi vector 
	std::vector<Persona> listPersonas;
     
     cout<<"Bienvenido al Sistema de registro de Avatar"<<endl;
     int opcion=0;
     while(opcion!=4){
    	cout<<"Ingrese que desea hacer"<<endl;
    	cout<<"1) DESEA AGREGAR UN AVATAR EN EL SISTEMA"<<endl;
    	cout<<"2) DESEA LISTAR UN AVATAR EN EL SISTEMA"<<endl;
    	cout<<"3) DESEA ELIMINAR UN AVATAR EN EL SISTEMA"<<endl;
    	cout<<"4) GUARDAR ARCHIVO"<<endl;
		cout<<"5) SALIR DEL SISTEMA "<<endl;
		cin>>opcion;
		if (opcion==1){
			string nacionOrigen,nombre,sexo;
			int edad,tipoBender,tipoPoder;
			cout<<"Ingrese el tipo de Bender que desea seleccionar">>end;
	    	cout<<"1) Desea seleccionar un Air-Bender "<<endl;
    		cout<<"2) Desea seleccionar un Fire-Bender "<<endl;
  		  	cout<<"3) Desea seleccionar un Water-Bender "<<endl;
    		cout<<"4) Desea seleccionar un Earth-Bender "<<endl;
			cout<<"5) Desea seleccionar un NON-Bender "<<endl;
			cin>>tipoBender;
			cout<<"Ingrese el tipo de poder que desea"<<endl;
	    	cout<<"1) Desea seleccionar Ofensivo "<<endl;
    		cout<<"2) Desea seleccionar Defensivo "<<endl;
  		  	cout<<"3) Desea seleccionar Curativo "<<endl;
    		cout<<"4) Desea seleccionar Invocacion de Mascota "<<endl;
			cin>>tipoPoder;
			PoderEspecial seleccionPoder; 
			if (tipoBender==1){
				int rango,fuerza;
				cout<<"Ingrese rango del poder"<<endl;
				cin>>rango;
				cout<<"Ingrese rango del poder"<<endl;
				cin>>fuerza;
			}
			if (tipoBender==2){
				
			}
			if (tipoBender==3){
				
			}
			if (tipoBender==4){
			
			}
			cout<<"Ingrese Nacion de Nacion de Origen"<<endl;
			cin>>nacionOrigen;
			cout<<"Ingrese Nombre">>endl;
			cin>>nombre;
			cout<<"Ingrese edad"<<endl;
			cin>>edad;
			cout<<"Ingrese sexo: "<<endl;
			cin>>sexo;
			if (tipoBender==1){
				int cantidadPelo;
				string colorFlechas;
				cout<<"Ingrese cantidad de Pelo"<<endl;
				cin>>cantidadPelo;
				cout<<"Ingrese Color de flechas"<<endl;
				cin>>colorFlechas;
				Nombre, Edad, Sexo, CantidadPelo, ColorFlechas, Poder

				AirBender(nacionOrigen,nombre,sexo,cantidadPelo,colorFlechas);
			}
			if (tipoBender==2){
				
			}
			if (tipoBender==3){
				
			}
			if (tipoBender==4){
			
			}
			if (tipoBender==5){
				
			}
		}//fin del opcion 1 del primer menu
		if (opcion==2){
			
		}//fin del opcion 2 del primer menu
		if (opcion==3){
			
		}//fin del opcion 3 del primer menu
		if (opcion==4){
			
		}//fin del opcion 4 del primer menu
     }
     return 0;
}