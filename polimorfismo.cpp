#include <iostream>
#include <stdlib.h>
using namespace std;


//clases

class Persona
{
	private:
		string nombre; 
		int edad;
	public: 
		Persona(string, int);
		virtual void mostrar();
};

class Empleado : public Persona
{
	private:
		float salario;	
	public:
		Empleado(string, int, float);
		void mostrar();

};
class Estudiante : public Persona
{
	private:
		float notaFinal;	
	public:
		Estudiante(string, int, float);
		void mostrar();

};
class Universitario : public Estudiante
{
	private:
		string carrera;	
	public:
		Universitario(string, int, float, string);
		void mostrar();

};
//costructor

Persona::Persona(string _nombre, int _edad)
{	
	nombre=_nombre;
	edad= _edad;
}
Empleado::Empleado(string _nombre, int _edad, float _salario) : Persona(_nombre, _edad)
{
	salario= _salario;
}

Estudiante::Estudiante(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad)
{
	notaFinal= _notaFinal;
}

Universitario::Universitario(string _nombre, int _edad, float _notaFinal, string _carrera) : Estudiante (_nombre, _edad, _notaFinal)
{
	carrera= _carrera;
}


//metodo

void Persona::mostrar()
{
	cout<< "Nombre: "<< nombre<< endl;
	cout<< "Edad: " << edad <<endl;
}
void Empleado::mostrar()
{
	Persona::mostrar();
	cout<< "EL salario del empleado es: "<< salario<< endl;
}
void Estudiante::mostrar()
{
	Persona::mostrar();
	cout<< "La nota final es: "<< notaFinal<< endl;
}
void Universitario::mostrar()
{
	Estudiante::mostrar();
	cout<< "La carrera del Estudiante es: "<< carrera <<endl;
}

int main()
{	
	Empleado empleado_1 ("Juan Pablo",22,2500);
	Estudiante estudiante_1("Alejandro", 25, 27.5);
	Universitario estudiante_2("MAritsa",24,20, "Mecatronica");
	Persona persona_1("Julio", 25);

	cout << "--------------------------------Lista de Persona------------------"<< endl;
	persona_1.mostrar();
	
	cout << "--------------------------------Lista de Estudiante------------------"<< endl;
	estudiante_1.mostrar();

	cout << "--------------------------------Lista de Universitarios------------------"<< endl;
	estudiante_2.mostrar();

	cout << "--------------------------------Lista de Empleados------------------"<< endl;
	persona_1.mostrar();
	return 0;
}
