#include <iostream>
#include <math.h>
using namespace std;

typedef int entero;

// DEFINICóN DE ESTRUCTURAS
struct complex
{
    double real, imag;
};
struct puntos
{
    double x, y ,z; // Declaracion de puntos X Y Z
};

// DEFINICóN DE ESTRUCTURAS
union flotint
{
    int i;
    float f;
} FloatEntero; // Renombrar union



// DECLARACION FUNCION ((PROTOTIPO))
double distancia (puntos Pi, puntos Pj);

//MAIN
int main (void){
    // numero complejo
    struct complex a;
    a.real =4;
    a.imag =2.;
    cout<< "complex=" << a.real << "+" << a.imag << "i" <<endl;

    // distancia de dos puntos
    puntos P1,P2;
    cout << "Introduzca las coordenadas del primer punto: "<<endl;
    cin >> P1.x >> P1.y >> P1.z;
    cout << "Introduzca las coordenadas del segundo punto: "<<endl;
    cin >> P2.x >> P2.y >> P2.z;
    cout << "La distancia entre los dos puntos es= "<<distancia (P1,P2)<<endl;

    //Uso de union ocupan el mismo espacio de memoria 
    // no es independiente de la maquina depende del complilador genera problemas
    FloatEntero.i = 10;
    FloatEntero.f= 43.3;
    entero b = FloatEntero.i;
    cout << "El numero FloatEntero es "<< FloatEntero.i <<" y"<< FloatEntero.f << endl;
    cout << "El numero de tipo entero "<< b << endl;
    return 0;
}

// DEFINICION DE LA FUNCION
double distancia (puntos Pi, puntos Pj)
{
    // sqrt((xf-x0)²+(yf-y0)²+(zf-z0)²) 
    return sqrt((((Pj.x-Pi.x)*(Pj.x-Pi.x))+
                ((Pj.y-Pi.y)*(Pj.y-Pi.y))+
                ((Pj.z-Pi.z)*(Pj.z-Pi.z))));
}