
#include "serie.h"

Serie::Serie(){

}

Serie::Serie(string nombre, Temporada temporada){

	this->nombre = nombre;
	this->temporada = temporada;
}

Serie::~Serie(){

}

string Serie::getNombre(){

	return this->nombre;

}

void Serie::setNombre(string nombre){

	this->nombre = nombre;

}

Temporada Serie::getTemporada(){

	return this->temporada;

}

void Serie::setTemporada(Temporada temporada){

	this->temporada = temporada;

}