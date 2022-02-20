//Program para la suma de dos numeros usando la programacion orientada a objetos
#include <iostream>
#include <stdlib.h>
using namespace std;

class Operaciones
{

	private:
		int variable1;
		int variable2;

	public:
		Operaciones(int, int);
		void sumar();
};

Operaciones::Operaciones(int _variable1, int _variable2 )
{
	variable1=_variable1;
	variable2=_variable2;
}

void Operaciones::sumar()
{
	cout<< "LA suma de "<< variable1<<" y "<< variable2 << " es igual a "<<variable1+variable2<<endl; 
}

int main()
{
	int v1, v2;

	cout<<"---------Realizacion de operaciones---------"<<endl;
	cout<<"Ingrese el primer numero: ";
	cin>> v1;
	cout<<"Ingrese el segundo numero: ";
	cin>> v2;

	Operaciones Sum = Operaciones(v1,v2);
	cout<< endl;

	Sum.sumar();

return 0;
}
