
#include "puntuacion.h"

Puntuacion::Puntuacion(){

}

Puntuacion::Puntuacion(float puntuacion){

	this->puntuacion = puntuacion;

}

Puntuacion::~Puntuacion(){

}

float Puntuacion::getPuntuacion(){

	return this->puntuacion;

}

void Puntuacion::setTexto(float puntuacion){

	this->puntuacion = puntuacion;

}
