#include<iostream>
#include<string.h>
#include<string>
using namespace std;
class producto
{
	private:
			char nombre [60];
			float cost_unt;
			int stock;
			string categoria;
			char estado;
	public:
		void ingre_datos();
};
void producto::ingre_datos()
{
	cout<<"ingrese nombre:";
	cin.getline(nombre,60);
	cout<<"\ningrese costo unitario:";
	cin>>cost_unt;
	cout<<"\ningrese el stock:";
	cin>>stock;
	cout<<"\nIngrese la catogaria:";cin>>categoria;
	cout<<"\nIngrese el estada: ";cin>>estado;
}
