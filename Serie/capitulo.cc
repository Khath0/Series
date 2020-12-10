
#include "capitulo.h"

Capitulo::Capitulo(){

}

Capitulo::Capitulo(string nombre, Persona persona, Trailer trailer, Subtitulo subtitulo){

	this->nombre = nombre;
	this->persona = persona;
	this->trailer = trailer;
	this->subtitulo = subtitulo;

}

Capitulo::~Capitulo(){

}

string Capitulo::getNombre(){

	return this->nombre;

}

void Capitulo::setNombre(string nombre){

	this->nombre = nombre;

}

Persona Capitulo::getPersona(){

	return this->persona;

}

void Capitulo::setPersona(Persona persona){

	this->persona = persona;

}

Trailer Capitulo::getTrailer(){

	return this->trailer;

}

void Capitulo::setTrailer(Trailer trailer){

	this->trailer = trailer;

}

Subtitulo Capitulo::getSubtitulo(){

	return this->subtitulo;

}

void Capitulo::setSubtitulo(Subtitulo subtitulo){

	this->subtitulo = subtitulo;

}