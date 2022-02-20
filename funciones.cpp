#include <iostream>
#include <math.h>
using namespace std;

// DECLARACION FUNCION ((PROTOTIPO))
int verificar (int i, int j);
double longitud (double x0,double y0,double z0,double xf,double yf,double zf);
void Saldo (double euros);


int main(void){
    int i;
    cout<< "escribe un numero"<<endl; cin>>i;
    int j;
    cout<<"escribe otro numero"<<endl;cin>>j;
    if (!verificar(i,j))  //llamada a la función  
        //(si la función retorna 0)
        cout<<i<<" es mayor que "<<j<<endl;
    else
        //(si la función retorna 1)
        cout<<i<<" es menor que "<<j<<endl;
    
    double x1,y1,z1; double x2,y2,z2;
    cout<<"coordenada x del primer punto "; cin>>x1;
    cout<<"coordenada y del primer punto "; cin>>y1;
    cout<<"coordenada z del primer punto "; cin>>z1;
    cout<<"coordenadas x y z del segundo punto \n"; cin>>x2>>y2>>z2;

    cout <<" la longitud es:"<<longitud (x1,y1,z1,x2,y2,z2)<<endl;

    Saldo (1000);
    Saldo (-1500);
    return 0;
}

// DEFINICION DE LA FUNCION
int verificar (int i, int j){  
    //(implementación)

    if (i<j) return 1;
    return 0;
}

double longitud (double x0,double y0,double z0,double xf,double yf,double zf){
    // sqrt((xf-x0)²+(yf-y0)²+(zf-z0)²)  
    return sqrt ((((xf-x0)*(xf-x0))+((yf-y0)*(yf-y0))+((zf-z0)*(zf-z0)))); 
}


void Saldo (double euros){
    //la variable se conserva en cada llamada
    static double Mi_Dinero ;
    Mi_Dinero += euros;
    cout << "tengo en cuenta:" << Mi_Dinero << "euros" <<endl;
}