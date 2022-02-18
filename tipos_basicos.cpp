// Tipos basicos
/*Se presentan algunos tipos de datos básicos*/

#include<iostream>
using namespace std;

int global = 5;

int main () {
    /*Suma con conversion de dato*/
    int a =1;
    double b = 1.2;
    double c = 2.3;
    cout << "x+y = " << c+b << " " << "a = " <<a<<endl;
    a=global + (int)b;
    cout<<"a = "<<a<<endl;

    
    /* El programa pregunta dos números y muestra el resultado*/
    double x, y, z;
    cout << "Introduzca el primer número" << endl ;
    cin >> x;
    cout << "Introduzca el segundo número" << endl ;
    cin >> y;
    z=x+y;
    cout << x <<" + "<< y <<" = "<< z <<endl;

    /* Suma de caracteres*/

    char d,e;
    cout << "Ingrese un caracter:"<< endl;
    cin >> d;
    cout << "Ingrese un caracter"<< endl;
    cin >> e;

    d+=e;// realizas una suma de los equivalentes ASCII

    cout << "La Suma: "<< d << endl;


    
    return 0;
}