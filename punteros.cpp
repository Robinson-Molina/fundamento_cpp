#include <iostream>
#include <stdio.h>

using namespace std;
// formato de puntero 
// Tipo * NombrePuntero;
//Hay que tener mucho cuidado en no dejar ningún puntero sin inicializar, ya que si no, su dirección
//quedaría indefinida.

#define MAX_SIZE 25
// DECLARACION FUNCION ((PROTOTIPO))
void matriz ();

int main(){
    int x = 2;
    int *ip = &x;

    cout<< "La variable x = " <<x<< " y esta en la posición de memoria " <<ip<< endl;

    int y=0 ;// variable entera , de nombre y, con valor asignado 0
    y=*ip; //resultado es análogo a una línea de código del tipo y=x.
    //valor de variable y = valor de variable apuntada por ip
    y+=1;

    cout << "El valor de la x = "<<x<< " y el valor de y= "<<y<< endl;

    *ip+=2;
    y=*ip;

    cout <<"el valor de la dirección de ip vale = "<<y<<endl;

    matriz()

    return 0; 
}

// DEFINICION DE LA FUNCION
void matriz (){
    int iMat [MAX_SIZE];
    int size;
    cout << "escribe las dimensiones de la matriz "; 
    cin >> size;

    if (size > MAX_SIZE){ 
        cerr << " tamaño maximo " << MAX_SIZE << " Error" << endl; 
        exit(1); 
    }

    int *MyPointer;
    MyPointer=&iMat[0];
    cout << "entrada de datos " <<endl;

    for (int i=0; i<size; i++){
        cout << " coeficiente (" << i << ")= "; 
        cin >> *MyPointer;
    }
    MyPointer=&iMat[size-1];
    cout << "matriz ++++++++ " <<endl;
    for (int i=0; i<size; i++){
        cout << " " << *MyPointer; 
        MyPointer--;
    }
}
