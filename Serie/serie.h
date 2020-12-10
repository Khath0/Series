
#ifndef SERIE_H
#define SERIE_H

#include <iostream>
#include <string>
#include "temporada.h"

using namespace std;

class Serie{

public:

	Serie();

	Serie(string nombre, Temporada temporada);

	~Serie();

	string getNombre();
	void setNombre(string nombre);

	Temporada getTemporada();
	void setTemporada(Temporada temporada);

private:

	string nombre;
	Temporada temporada;

};

#endif