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
	cin.getline(nombre,60);
	cin>>cost_unt;
	cin>>stock;
	cin>>categoria;
	cin>>estado;
}
