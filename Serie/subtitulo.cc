
#include "subtitulo.h"

Subtitulo::Subtitulo(){

}

Subtitulo::Subtitulo(string lenguaje){

	this->lenguaje = lenguaje;

}

Subtitulo::~Subtitulo(){

}

string Subtitulo::getLenguaje(){

	return this->lenguaje;

}

void Subtitulo::setLenguaje(string lenguaje){

	this->lenguaje = lenguaje;

}
