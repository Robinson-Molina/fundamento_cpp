#include <iostream>
#include <stdlib.h>
using namespace std;

class CALCU
{
	private:
		int n1,n2;
	public:
		CALCU(int, int);
		void getCALCU();
		void suma();
 
};

CALCU::CALCU(int _n1, int _n2)
{
	n1=_n1;
	n2=_n2;
	
}

void  CALCU::getCALCU()
{

}
void CALCU::suma()
{
	cout<<"Numero 1: "<< n1 <<" + " <<"Numero 2: "<< n2 <<endl;
	
}

int main()
{
	int n_1,n_2,r1;
	cout << endl;
	cout << endl;
	
	cout<<"------Bienvenido a tu Calculadora---------"<< endl;
	cout<<"Profavor ingrese un numero entero"<< endl;
	cin>> n_1;
	cout<<"Profavor ingrese otro numero entero"<< endl;
	cin>> n_2;
	
	CALCU p1= CALCU(n_1,n_2);
	r1=n_1+n_2;
	
	cout<<endl;
	
	p1.suma();
	cout<< "Su respuesta es:"<< r1 <<endl;

	
	
return 0;
}
