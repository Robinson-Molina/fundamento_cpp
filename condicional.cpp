#include <iostream>
using namespace std;

int main (void){

    //Sentencias tipo if/else. Anidamientos y operaciones lógicas

    int d=1; int k=2; int c=0;
    if (d<k)
        {cout <<"d es menor que k"<<endl;}
    else
        {cout <<"d es mayor que k"<<endl;}

    
    //Condicional if en una sola linea
    cout << "Que operación deseas hacer, 1(suma), 2(producto)" <<endl ;
    cin >> c;

    if (c==1) {cout <<"El resultado es: "<< d+k <<endl;}
    else{cout <<"El resultado es:"<< d*k << endl;}
    
    // operadores logicos
    int a=5; int b=0;
    int s = a&&b; 
    cout << s << endl; // operador && AND
    int e=a||b;
    cout << e << endl; // operador || OR
    int f=!a;   
    cout << f << endl; // operador ! NOT


    //Sentencia tipo switch
    int i=0;
    cout << "ingrese un numero i:"<< endl;
    cin >> i;

    switch (i){
        case 1:
            cout <<"i es 1"<<endl;
            break;
        case 2:
            cout <<"i es 2"<<endl;
            break;
        case 25:
            cout << "i es 25" << endl;
            break;
        default:
            cout <<"i no es ni 1 ni 2"<<endl;
            break;
    }

    //Sentencia for
    cout << "Los numeros son:"<< endl;

    for (int i=2; i<7; i++){
        cout <<"escribo el: "<<i<<endl;
    }

    //Uso de continue y break
    cout << "Los numeros son:"<< endl;
    for (int i=1; i<10; i++)
    {
        if (i==2 || i==4) continue ;
        if (i ==7) break;
        cout <<"escribo el: "<<i<<endl;
    }

    return 0;
}