// Entradas , salidad , lectura, escritura

#include <fstream>
#include <iostream>
using namespace std;

/*ifstream(); initialization (2)	
explicit ifstream (const char* filename, ios_base::openmode mode = ios_base::in);*/


int main(void){

    /*Realizar operaciones con numero y almacenarlo en archivo*/

    int x,y,z;
    cout << "valor de x:";
    cin >> x;

    cout << "Valor de y:";
    cin >> y;

    ofstream fp;
    fp.open("base.dat", ios::out);
    fp << x+y << " ";
    fp << x-y << endl; 
    fp.close ( );
    
    int sum, dif;

    ifstream fr("base.dat");
    fr >> sum >> dif;   

    cout <<"la suma es "<< sum <<endl;
    cout <<"la diferencia es" << dif <<endl;
    fr.close ( ) ;
    

    return 0;

}
