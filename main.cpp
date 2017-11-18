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
#include <vector>
#include <fstream>


using namespace std;


void escribirArchivo(vector<Persona*>);
int main(){
	//mi vector 
	vector<Persona*> listPersonas;
     
     cout<<"Bienvenido al Sistema de registro de Avatar"<<endl;
     int opcion=0;
     while(opcion!=4){
    	cout<<"Ingrese que desea hacer"<<endl;
    	cout<<"1) DESEA AGREGAR UN AVATAR EN EL SISTEMA"<<endl;
    	cout<<"2) DESEA LISTAR UN AVATAR EN EL SISTEMA"<<endl;
    	cout<<"3) DESEA ELIMINAR UN AVATAR EN EL SISTEMA"<<endl;
		cout<<"4) SALIR DEL SISTEMA "<<endl;
		cin>>opcion;
		while(opcion!=5){
			string nacionOrigen,nombre,sexo;
			int edad,tipoBender,tipoPoder;
			cout<<"Ingrese el tipo de Bender que desea seleccionar"<<endl;
	    	cout<<"1) Desea seleccionar un Air-Bender "<<endl;
    		cout<<"2) Desea seleccionar un Fire-Bender "<<endl;
  		  	cout<<"3) Desea seleccionar un Water-Bender "<<endl;
    		cout<<"4) Desea seleccionar un Earth-Bender "<<endl;
			cout<<"5) Desea seleccionar un NON-Bender "<<endl;
			cin>>tipoBender;
			PoderEspecial* seleccionPoder;//MI PODER A SELECCIONAR
			if(tipoBender!=5){
				cout<<"Ingrese el tipo de poder que desea"<<endl;
	    		cout<<"1) Desea seleccionar Ofensivo "<<endl;
	    		cout<<"2) Desea seleccionar Defensivo "<<endl;
	  		  	cout<<"3) Desea seleccionar Curativo "<<endl;
    			cout<<"4) Desea seleccionar Invocacion de Mascota "<<endl;
				cin>>tipoPoder;
				string nombrePoder;
				int nivelPoder;
				cout<<"Ingrese Nombre del poder"<<endl;
				cin>>nombrePoder;
				cout<<"Ingrese nivel del Poder"<<endl;
				cin>>nivelPoder;
				if (tipoPoder==1){
					int rango,fuerza;
					cout<<"Ingrese rango del poder"<<endl;
					cin>>rango;
					cout<<"Ingrese fuerza del poder"<<endl;
					cin>>fuerza;
					seleccionPoder= new Ofensivo(nombrePoder,nivelPoder,rango,fuerza);
				}	
				if (tipoPoder==2){
					int resistencia,duracion;
					cout<<"Ingrese resistencia del poder"<<endl;
					cin>>resistencia;
					cout<<"Ingrese duracion del poder"<<endl;
					cin>>duracion;
					seleccionPoder= new Defensivo(nombrePoder,nivelPoder,resistencia,duracion);
				}
				if (tipoPoder==3){
					string tipoCuracion;
					cout<<"Ingrese tipo de tipo de curacion del poder"<<endl;
					cin>>tipoCuracion;
					seleccionPoder = new Curativo(nombrePoder,nivelPoder,tipoCuracion);
				}
				if (tipoPoder==4){
					string nombreMascota,especie,habilidad,tipoMascota;
					int opcionMascota=0;
					cout<<"Ingrese nombre de la mascota"<<endl;
					cin>>nombreMascota;
					cout<<"Ingrese especie "<<endl;
					cin>>especie;
					cout<<"Ingrese habilidad"<<endl;
					cin>>habilidad;
					cout<<"Ingrese tipo de mascota "<<endl;
					cout<<"1) Guerra"<<endl;
					cout<<"2) Domestica"<<endl;
					cin>>opcionMascota;
					if (opcionMascota==1){
						nombreMascota="Guerra";
					}
					if (opcionMascota==2){
						nombreMascota="Domestica";
					}
					seleccionPoder= new InvocacionMascota(nombrePoder,nivelPoder,nombreMascota,especie,habilidad,tipoMascota);
				}
			}
			cout<<"Ingrese Nacion de Nacion de Origen"<<endl;
			cin>>nacionOrigen;
			cout<<"Ingrese Nombre"<<endl;
			cin>>nombre;
			cout<<"Ingrese edad"<<endl;
			cin>>edad;
			cout<<"Ingrese sexo: "<<endl;
			cin>>sexo;
			Persona* m = new Persona();
			if (tipoBender==1){
				int cantidadPelo;
				string colorFlechas;
				cout<<"Ingrese cantidad de Pelo"<<endl;
				cin>>cantidadPelo;
				cout<<"Ingrese Color de flechas"<<endl;
				cin>>colorFlechas;
				m = new AirBender(nacionOrigen,nombre,edad,sexo,cantidadPelo,colorFlechas,seleccionPoder);
				listPersonas.push_back(m);
			}
			if (tipoBender==2){
				int cicatrices,victorias;
				cout<<"Ingrese numero de cicatrices"<<endl;
				cin>>cicatrices;
				cout<<"Ingrese numero de victorias"<<endl;
				cin>>victorias;
				 m = new FireBender(nacionOrigen,nombre,edad,sexo, cicatrices,victorias,seleccionPoder);
				listPersonas.push_back(m);
			}
			if (tipoBender==3){
				string tribuOrigen,arma;
				cout<<"Ingrese Origen de tribu "<<endl;
				cin>>tribuOrigen;
				cout<<"Ingrese arma "<<endl;
				cin>>arma;
				 m = new WaterBender(nacionOrigen,nombre,edad,sexo,tribuOrigen,arma,seleccionPoder);
				listPersonas.push_back(m);
			}
			if (tipoBender==4){
				int cantidadColas,graduacionOjos=0;
				cout<<"Ingrese cantidad de colas"<<endl;
				cin>>cantidadColas;
				while(graduacionOjos>=0 && graduacionOjos<=200){
					cout<<"Ingrese graduacion de los ojos"<<endl;
					cin>>graduacionOjos;
				}
				 m = new EarthBender(nacionOrigen,nombre,edad,sexo,cantidadColas,graduacionOjos,seleccionPoder);			
				listPersonas.push_back(m);
			}
			if (tipoBender==5){
				string trabajoLaboral;
				int fuerza,velocidad;
				cout<<"Ingrese el trabajo laboral"<<endl;
				cin>>trabajoLaboral;
				cout<<"Ingrese fuerza"<<endl;
				cin>>fuerza;
				cout<<"Ingrese velocidad"<<endl;
				cin>>velocidad;
				m = new NonBender(nacionOrigen,nombre,edad,sexo,trabajoLaboral,fuerza,velocidad);
				listPersonas.push_back(m);
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

/* 

void escribirArchivo(vector<Persona> listPersonas){
	ofstream archivo("Personas.txt",ios::out);
	Persona* person;
	for (int i = 0; i < listPersonas.size(); ++i){
		cout<<"Termino de escribir"<<endl;
		person = listPersonas.at(i);
		archivo<<"SEXO: "<<p->getSexo()<<endl;
		archivo<<"NACIONALIDAD: "<<p->getNacionOrigen()<<endl;
		archivo<<"EDAD: "<<p->getEdad()<<endl;
		archivo<<"Nombre: "<<p->getNombre()<<endl;
	}
	archivo.close();
} */
