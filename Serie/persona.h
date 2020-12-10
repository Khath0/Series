
#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona{

public:

	Persona();
	
	Persona(string nombre, string rol);

	~Persona();

	string getNombre();
	void setNombre(string nombre);

	string getRol();
	void setRol(string rol);

private:

	string nombre;
	string rol;

};

#endif