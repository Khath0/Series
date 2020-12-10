
#ifndef TEMPORADA_H
#define TEMPORADA_H

#include <iostream>
#include <string>
#include "capitulo.h"

using namespace std;

class Temporada{

public:

	Temporada();

	Temporada(string nombre, Capitulo capitulo);

	~Temporada();

	string getNombre();
	void setNombre(string nombre);

	Capitulo getCapitulo();
	void setCapitulo(Capitulo capitulo);

private:

	string nombre;
	Capitulo capitulo;

};

#endif