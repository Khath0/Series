
#include "usuario.h"

Usuario::Usuario(){

}

Usuario::Usuario(string nombre, Critica critica, Puntuacion puntuacion){

	this->nombre = nombre;
	this->critica = critica;
	this->puntuacion = puntuacion;

}

Usuario::~Usuario(){

}

string Usuario::getNombre(){

	return this->nombre;

}

void Usuario::setNombre(string nombre){

	this->nombre = nombre;

}

Critica Usuario::getCritica(){

	return this->critica;

}

void Usuario::setCritica(Critica critica){

	this->critica = critica;

}

Puntuacion Usuario::getPuntuacion(){

	return this->puntuacion;

}

void Usuario::setPuntuacion(Puntuacion puntuacion{

	this->puntuacion = puntuacion;

}
