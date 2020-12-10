
#include "persona.h"

Persona::Persona(){

}

Persona::Persona(string nombre, string rol){

	this->nombre = nombre;
	this->rol = rol;
}

Persona::~Persona(){

}

string Persona::getNombre(){

	return this->nombre;

}

void Persona::setNombre(string nombre){

	this->nombre = nombre;

}

string Persona::getRol(){

	return this->rol;

}

void Persona::setRol(string rol){

	this->rol = rol;

}