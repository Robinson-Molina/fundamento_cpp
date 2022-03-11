#include <iostream>
#include <stdint.h>

using namespace std;

//PROTOTIPOS
/*declaración de funciones para intercambio
de los valores de las variables */
void swapping1 (int i, int j);  //paso por valor
void swapping2 (int *i, int *j);    //paso por puntero
void swapping3 (int &i, int &j);    //paso por referencia

int main(){
    int f;
    int x=1, y=2;//definición de variables e inicialización x=1, y=2
    int *ix = &x, *iy =&y;//definición de punteros e inicialización
    cout <<"x= " << x <<" direccion x= "<< &x << " y= "<< y << " direccion y= "<< &y <<endl;
    cout <<"que función desea aplicar (1,2,3)?"<<endl;
    cin >>f;

    switch (f){
    case 1:
        swapping1(x,y);
        cout <<"x= " << x <<" direccion x= "<< &x << " y= "<< y <<" direccion y="<< &y <<endl;
        break;
    case 2:
    swapping2(ix , iy); //x=2, y=1 , &x = OX352E , &y = 0X352A
        cout <<"x= " << x <<" direccion x= "<< &x << " y= "<< y << " direccion y="<< &y <<endl;
        break;
    default:
        swapping3(x,y);
        cout <<"x= " << x <<" direccion x= "<< &x << " y= "<< y <<" direccion y= "<< &y <<endl;
        break;
    }    
    return 0;
}

//FUNCIONES
void swapping1 (int i, int j){
    //NO cambia el valor original de las variables
    int temp=i; 
    i=j; 
    j =temp;    //NO cambia dirección original variables
    cout << "i=" << i << " j=" << j <<endl;
}

void swapping2(int *i, int *j){
    //SI cambia el valor original de las variables
    int temp=*i; 
    *i=*j; 
    *j =temp;//NOcambia direcc.original variables
    cout << "i=" << *i << "j=" << *j <<endl;
}

void swapping3 (int &i, int &j){    
    //solo se duplica la direccion.
    //Codigo análogo al caso 1
    int temp=i; 
    i=j;
    j =temp;//SI cambia el valor original variables
    cout << "i=" << i << "j=" << j <<endl;
}