#include<iostream>
#include<string.h>
#include<string>
using namespace std;





class Proveedor{
	private:
		char nombre_completo[40];
		char telefono[12];
		char nombre_de_la_empresa[30];
		char categoria[15];
	public:
		Proveedor(char,char,char,char);
		ingresar_dato();
}; 

Proveedor::Proveedor(char _nombre_completo, char _telefono, char _nombre_de_la_empresa, char _categoria){
	nombre_completo = _nombre_completo;
	telefono = _telefono;
	nombre_de_la_empresa = _nombre_de_la_empresa;
	categoria = _categoria;
}
