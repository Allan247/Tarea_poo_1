#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	cout<<"ingrese Nit: ";
	cin>>nit;
	cout<<"ingrese nombres: ";
	cin>>nombres;
	cout<<"ingrese apellidos: ";
	cin>>apellidos;
	cout<<"ingrese direccion: ";
	cin>>direccion;
	cout<<"ingrese telefono: ";
	cin>>telefono;
	// instanciar un objeto y cambiar nit unicamente
	Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
	obj.mostrar();
	cout<<"ingrese nit"<<endl;
	cin>>nit;
	obj.mostrar();
	
}
	
