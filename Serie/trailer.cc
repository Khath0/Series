
#include "trailer.h"

Trailer::Trailer(){

}

Trailer::Trailer(string nombre){

	this->nombre = nombre;

}

Trailer::~Trailer(){

}

string Trailer::getNombre(){

	return this->nombre;

}

void Trailer::setNombre(string nombre){

	this->nombre = nombre;

}
