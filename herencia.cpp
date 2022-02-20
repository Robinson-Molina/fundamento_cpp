#include <iostream> 
#include <stdlib.h>
using namespace std;


//CLASES

class Persona
{

	private:			//Atributos
		string nombre;
		int edad;
	public:				//Metodos
		Persona(string, int);	
		void mostrarPersona();

};

class Estudiante : public Persona
{

	private:			
		string codigoEstudiante;
		float notaFinal;
	public:				
		Estudiante(string, int, string, float);
		void mostrarEstudiante();

};
class Administrativo : public Persona
{

	private:			
		string codigoTrabajo;
		float sueldo;
	public:				
		Administrativo(string, int, string, float);
		void mostrarAdministrativo();

};

//Constructores

Persona::Persona(string _nombre, int _edad)
{
	nombre= _nombre;
	edad= _edad;
}

Estudiante:: Estudiante(string _nombre, int _edad, string _codigoEstudiante,float _notaFinal) : Persona (_nombre, _edad)
{
	codigoEstudiante= _codigoEstudiante;
	notaFinal= _notaFinal;
}

Administrativo:: Administrativo(string _nombre, int _edad, string _codigoTrabajo,float _sueldo) : Persona (_nombre, _edad)
{
	codigoTrabajo= _codigoTrabajo;
	sueldo= _sueldo;
}


// metodo

void Persona::mostrarPersona()
{
	cout<< "Nombre: "<< nombre<< endl;
	cout<< "Edad: "<< edad<< endl;
}


void Estudiante::mostrarEstudiante()
{
	mostrarPersona();
	cout << "codigo alumno: " << codigoEstudiante <<endl;
	cout << "nota Final: "<< notaFinal << endl;
	
}

void Administrativo::mostrarAdministrativo()
{
	mostrarPersona();
	
	cout << "codigo Trabajo: " << codigoTrabajo <<endl;
	cout << "Sueldo: "<< sueldo << endl;
	
}
int main ()
{
	Administrativo Obrero_1 ("juan", 23, "N00w45", 400);
	Estudiante alumno_1 ("Sebastian", 20, "17539949", 9.5);
	
	alumno_1.mostrarEstudiante();
	cout<< endl;

	alumno_1.mostrarPersona();	

	cout<< endl;
	Obrero_1.mostrarAdministrativo();
	return 0;
}


