
#include "temporada.h"

Temporada::Temporada(){

}

Temporada::Temporada(string nombre, Capitulo capitulo){

	this->nombre = nombre;
	this->capitulo = capitulo;
}

Temporada::~Temporada(){

}

string Temporada::getNombre(){

	return this->nombre;

}

void Temporada::setNombre(string nombre){

	this->nombre = nombre;

}

Capitulo Temporada::getCapitulo(){

	return this->capitulo;

}

void Temporada::setCapitulo(Capitulo capitulo){

	this->capitulo = capitulo;

}