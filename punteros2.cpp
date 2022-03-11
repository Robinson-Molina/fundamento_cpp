#include <iostream>
#include <stdio.h>

using namespace std;
//prototipo
void matriz();
void matrices();

int main(){
    int x[10];
    int *ip;
    ip= &x [0]; // puede ser sustituido ip=x;

    for(int i=0; i<10; i++){
        x[i]=i;
        cout <<"La posicion de memoria "<<ip+i<<endl;
        cout << "tiene el valor2 " << *(ip+i)<<endl;
    }

    matriz();
    cout <<""<< endl;
    matrices();

    return 0;
}
void matriz(){
    //int * * ip;  //puntero a puntero de enteros
    //int x[ ] [ ] //puntero constante (bidimensional) a enteros
    
    int y [3][4];
    int *ip;
    ip=&y [0][0];

    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            y[i][j]=i+j;
            cout << "x(" <<i<< ", " <<j<< ") = " <<*(ip++)<< " en la posicion de memoria "<<ip-1<<endl;
        }
    }

}

void matrices(){
    int x[3];   //vector x de dimensión 3
    int y[3][2];    //matriz y de dimensión 3x2
    int z[2][3];     //matriz z de dimensión 2x3
    
    int *ipx;   //puntero de enteros ipx
    int *ipy;   //puntero de enteros ipy
    int *ipz;   //puntero de enteros ipz
    
    ipx=&x [0];     //dirección ipx = dirección x[0]
    ipy=&y [0][0];  //direción ipy = direncción y[0]
    ipz=&z [0][0]; //dirección ipz = dirección z [0][0]
    
    //Damos valores y posicionamos en memoria el vector
    for(int i1=0; i1<3; i1++){
        x[i1]=i1;
        cout <<"x("<<i1<<")= "<<x[i1]<<" en la posicion de memoria "<<ipx+i1<<endl;
    }
    cout <<""<< endl;

    //Damos valores y posicionamos en memoria el vector y
    for(int i2=0;i2<3;i2++){
        for(int j2=0;j2<4;j2++){
            y[i2][j2]=i2+j2;
            cout <<"y("<<i2<<", "<<j2<<")= "<<y[i2][j2]<<" en la posicion de memoria "<<ipy++<<endl;
        }
    }
    cout <<""<< endl;

    //Damos valores y posicionamos en memoria el vector z
    for (int i3=0 ; i3<2 ; i3++){
        for (int j3=0; j3<3; j3++){
            z[i3][j3] =i3+(2*j3);
            cout <<"z ("<<i3<<", "<<j3<<")="<<z[i3][j3]<<" en la posicion de memoria "<<ipz++<<endl;
        }
    }
    int M1[1][2];
    int M2[2][2];
    // declaramos una matriz de dimensiones 1x2
    // declaramos una matriz de dimensiones 2x2
    cout <<""<< endl;
    //producto del vector X por la matriz Y
    for (int i4=0 ; i4<1 ; i4++)
    for (int j=0; j<2; j++){
        M1[i4][j] =0;
        cout <<"M1("<<i4<<", "<<j<<")="<<M1[i4][j]<<endl;
    }
    //producto de la matriz Z por la matriz Y
    for (int i5=0 ; i5<2 ; i5++)
    for (int j=0; j<2; j++){
        M2[i5][j] = 0;
        cout <<"M2("<<i5<<", "<<j<<")="<<M2[i5][j]<<endl;
    }
    
    cout <<""<< endl;
    for (int k1=0; k1<1; k1++){
        for (int i1=0 ; i1<2 ; i1++){
            for (int j1=0; j1<3; j1++){
                M1[k1][i1] += x[j1] * y[j1][i1];
                
            }
            cout <<"M1 ("<<k1<<", "<<i1<<")="<<M1[k1][i1]<<endl;
        } 
    }
    
    for (int k2=0; k2<2; k2++){
        for (int i2=0 ; i2<2 ; i2++){
            for (int j2=0; j2<3; j2++){
                M2[k2][i2] += z[k2][j2] * y[j2][i2];
            }
            cout <<"M2 ("<<k2<<", "<<i2<<")="<<M2[k2][i2]<<endl;
        }
    }  

}