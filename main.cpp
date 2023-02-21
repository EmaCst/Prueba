#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit \n";
	cin>>nit;
	cout<<"Ingresar Nombres \n";
	cin>>nombres;
	cout<<"Ingresar Apellidos \n";
	cin>>apellidos;
	cout<<"Ingresar Direccion \n";
	cin>>direccion;
	cout<<"Ingresar Telefono \n";
	cin>>telefono;
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	//cout<<"Datos del Cliente "<<obj.getNit()<<", "<<obj.getNombres()<<", "<<obj.getApellidos()<<", "<<obj.getDireccion()<<", "<<obj.getTelefono();
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setAppellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
}