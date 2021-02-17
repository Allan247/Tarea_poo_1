#include "persona cpp.cpp"
#include <iostream> 
using namespace std;

class Cliente : Persona {
	//atributos
	private : string nit;
	
	//constructor 
	public: 
	Clinete (){
		
	}
	
	Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){
		
	nit =n;
		
	}
	void mostrar(){
		cout<<"______________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<endl;
	}
};
