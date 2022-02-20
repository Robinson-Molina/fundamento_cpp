//DEFINICION DE CLASES EN C++

#include <iostream> // libreria propia de SSlenguaje
#include <stdlib.h> //Definicion de cabecera de libreira estandar
using namespace std; //creacion de objetos para la libreria estandar

//1.Declaracion de una clase

class Persona
{

	private:			//Atributos
		int edad;
		string nombre;
	public:				//Metodos
		Persona(int, string);	//contructor de la clase
		void leer();
		void correr();
		void jugar();
		string getnombre();
		int getedad();

};

// 2. Declaracion de los constructores e inicalizacion de los atributos

Persona::Persona(int _edad, string _nombre)
{
	edad= _edad;
	nombre= _nombre;
}

//3. Declaracion de los metodos

void Persona::leer()
{
	cout<<"Soy "<< nombre<<", tengo " <<edad << " años "<<" y estoy leyendo" << endl;
}

void Persona::correr()
{
	cout<<"Soy " <<nombre<<" y estoy corriendo"<<endl;
}

void Persona::jugar()
{
	cout<<"Soy " <<nombre<<" y estoy juagando Basquet"<<endl;
}

int Persona::getedad()
{
	return edad;
}
string Persona::getnombre()
{
	return nombre;
}
//4. programacion dde la fucion principal (main)

int main()
{
	//declaracion de variables
	string nombre_p1, nombre_p2;
	int edad_p1, edad_p2; 

	cout<< "--------DEclaracion de Clases y objetos ----------"<<endl;
	cout<< "Ingrese el Nombre de la persona 1:";
	cin>> nombre_p1;
	cout<< "Ingrese el edad de la persona 1:";
	cin>> edad_p1;
	
	//creacion de los objetos de la clase
	Persona p1 = Persona(edad_p1,nombre_p1);
	Persona p2 = Persona(18, "Maria");

	cout<< endl;

		

	p1.leer();
	p1.correr();
	p1.jugar();

	cout<< endl;
	

	p2.leer();
	p2.correr();
	p2.jugar();		

	cout<< endl;	
	
	cout<<"Uso de Getters" << endl;
	cout<<"Mi Nombre es: " << p1.getnombre() << endl;
	cout<<"Mi edad es: " << p1.getedad() << endl;
		

	return 0;
} 






