// Ficha 1
/* Un prgrama que pregunta el nombre y le saluda*/

#include <iostream>
using namespace std;
#define FRIEND 1

int main (){
    char name[200];

    cout <<"Escribie tu nombre"<< endl;
    cin >> name;
    #ifdef FRIEND //si esta definido se ejecuta
        cout << "HOLA " << name << ", QUE TAL !!" << endl;
    #endif

    cout << "Esto de C++ prarece Fácil" << endl;

    char msg[200];
    cout << "Escribe un mensaje con una sola palabra:" <<endl;
    cin >> msg;
    cout << msg;
    cout << " **************" << endl;
    cout <<msg << endl;


    return 0;
    
}
