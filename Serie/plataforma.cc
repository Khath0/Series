
#include "plataforma.h"

Plataforma::Plataforma(){

}

Plataforma::Plataforma(string nombre, Serie serie){

	this->nombre = nombre;
	this-> serie = serie;

}

Plataforma::~Plataforma(){

}

string Plataforma::getNombre(){

	return this->nombre;

}

void Plataforma::setNombre(string nombre){

	this->nombre = nombre;

}

Serie Plataforma::getSerie(){

	return this->serie;

}

void Plataforma::setSerie(Serie serie){

	this-> serie = serie;

}