#include<string>

class Factura{
	private:
		int RUC;
		int NumFactura[4];
		char NommbreE[20];
		char DireccionE[40];
		string fecha;
		char telefono[15];
		float saldo;
	
	public:
		Factura();
		
		//Establecer atributos
		void setFactura(int _RUC, int _NumFactura, char _NombreE, char _DireccionE, string _fecha, char _telefono, float _saldo){
			RUC = _RUC;
			NumFactura = _NumFactura;
			NombreE = _NombreE;
			DireccionE = _DireccionE;
			fecha = _fecha;
			telefono = _telefono;
			saldo = _saldo;
		}	
		
		//Obtener atributos
		int getRUC(){
			return RUC;
		}
		
		int getNumFactura(){
			return NumFactura;
		}
		
		char getNombreE(){
			return NombreE;
		}
		
		char getDireccionE(){
			return DireccionE;
		}
		
		string getfecha(){
			return fecha;
		}
		
		char gettelefono(){
			return telefono;
		}
		
		float getsaldo(){
			return saldo;
		}
		
		void IngresarFactura();
};

Factura::Factura(){
}


