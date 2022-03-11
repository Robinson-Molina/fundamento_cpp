#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int *iMat; 
    unsigned long size;
    
    cout << "escribe las dimensiones de la matriz "; cin >> size;
    
    iMat=new int [size]; // uso de new

    if (!iMat){
        cerr << "Error. No hay memoria suficiente" << endl; 
        exit(1);
    }
    cout << "entrada de datos " <<endl;

    for (unsigned long i=0; i<size; i++){
        cout << " coeficiente (" << i << ")="; 
        cin >> *iMat; 
        iMat++;
    }
    iMat--;
    cout << "matriz ++++++++ " <<endl;

    for (int i=0; i<size; i++){
        cout << " " << *iMat--;  
    }
    return 0;
}