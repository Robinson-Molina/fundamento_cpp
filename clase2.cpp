#include <iostream>
using namespace std;

class complex{
    private:
        double real, imag;
    public:
        complex (double a, double b){  //constructor
            real=a ; 
            imag=b ;
        }  
        ~complex () {}  //destructor

        complex (complex& a){//constructor copia
            real=a.get_real(); 
            imag=a.get_imag();
        }
        complex& operator =(complex& m){   //asignación
            real=m.get_real(); 
            imag=m.get_imag(); 
            return *this;   // puntero
        }
        double get_real (void) {return real;} //acceso al encapsulamiento
        double get_imag (void) {return imag;}
        friend ostream& operator << (ostream& os, complex& a){  //redefinición del operador <<
            os << "Es un Complex=";
            os << a.get_real() <<"+"<< a.get_imag () <<"i"<<endl;
            return os;
        }
};

int main (void){ //programa principal

    complex a(1.,1.); //definimos un objeto a complejo
    complex b(2.,4.);
    b=a; //asignamos un complejo a otro
    complex c(a) ; //copiamos un complejo de otro
    cout <<"complex a ="<<a.get_real()<<"+"<<a.get_imag()<<"i"<<endl;
    cout <<"complex b ="<<b.get_real()<<"+"<<b.get_imag()<<"i"<<endl;
    cout << c << endl;

    return 0;
}