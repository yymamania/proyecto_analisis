#include <iostream>
#include <string>
#include "factu.h"
#include "Product.h"
#include "Almacen.h"
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main()
{
//	Factura f1;
// Ingresar Producto
/*	producto p1;
	Almacen A1;
		
	p1.ingre_datos();
	A1.agregar_Producto(&p1);
	cout<<endl;
	A1.visualizarProductos();*/
	
	producto Produc[2];
	Almacen A1;
	int i = 0;
	
	do{
		Produc[i].ingre_datos();
		A1.agregar_Producto(&Produc[i]);
		system("cls");
		i++;	
	}while(i<2);
	
	A1.visualizarProductos(); 	
	
	ofstream archivo_Productos;
	archivo_Productos.open("d://CURSOS 4TO CICLO//Analisis de Sistemas//prueba 3//Archivo_Productos.txt",ios::app);
	return 0;
}	
