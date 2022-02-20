#include <iostream>
#include <math.h>
#define PI 3.14159
#define MAX_SIZE 25

using namespace std;
/*Se define una clase como un conjunto de datos (atributos) y operaciones (métodos).
Todos los elementos definidos dentro de una clase se llaman miembros (atributos y métodos).*/
//CLASE
class complexPolar{
    public:
        double mod, arg;
        complexPolar (double a, double b){
            mod = sqrt ((a*a)+(b*b));
            arg = 180.*atan(b/a)/PI;
            }
        ~complexPolar () {}
};

class Matrix{
    public:
        //  datos
        int size; double s[MAX_SIZE];
        // constructores
        Matrix () : size(0) {}
        Matrix (int m){
            if (m>MAX_SIZE){
                cerr << "la dimension maxima es "<< MAX_SIZE << endl; 
                m=MAX_SIZE;
            }
            size=m;
            for (int i=0; i<size; i++) s[i]=0.;
            for (int i=0; i<size; i++){
                cout << endl << "coef (" << i << ")="; 
                cin >> s[i];
            }
        }
        ~Matrix() { size=0; }
        
        void Suma_de_Matrices (Matrix B);
};

// funcion suma de matrices
void Matrix :: Suma_de_Matrices (Matrix A){
    if (A.size != size) { 
        cerr << "suma con dimensiones diferentes. Error" << endl; return;
    }
    for (int i=0; i<size; i++) {
        cout << "suma(" << i << ")=" << s[i] + A.s[i] << endl;
    }
    
    return;
}

//MAIN
int main(void){
    double a, b;
    cout<< "introduzca la parte real del punto:"<<endl;
    cin>> a;
    cout<< "introduzca la parte imaginaria del punto:"<<endl;
    cin>> b;
    complexPolar P (a, b);
    cout << "la notacion polar ("<< P.mod<< "," << P.arg << ")" <<endl;
    
    //MATRICES
    Matrix A(4); Matrix B(4);
    cout << "\n" <<endl;

    A.Suma_de_Matrices (B);
    return 0;
}
