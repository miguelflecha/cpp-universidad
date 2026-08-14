#include <iostream>
#include<string.h>
using namespace std;

struct Producto{
	
	char nombre[30];
	int codigo;
	float precio;
}producto1;

int main (){
	cout<<"\n Ingrese el nombre: ";
	cin.getline(producto1.nombre,30,'\n');
	cout<<"\n Ingrese el codigo: ";
	cin>>producto1.codigo;
	cout<<"\n Ingrese el precio: ";
	cin>>producto1.precio;
	cout<<"\n\n...DATOS DEL PRODUCTO..."<<endl;
	cout<<"\n Nombre: "<<producto1.nombre<<endl;
	cout<<"\n codigo: "<<producto1.codigo<<endl;
	cout<<"\n precio: "<<producto1.precio<<endl;
}
