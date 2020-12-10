
#include "critica.h"

Critica::Critica(){

}

Critica::Critica(string texto){

	this->texto = texto;

}

Critica::~Critica(){

}

string Critica::getTexto(){

	return this->texto;

}

void Critica::setTexto(string texto){

	this->texto = texto;

}
