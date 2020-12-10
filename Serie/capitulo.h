
#ifndef CAPITULO_H
#define CAPITULO_H

#include <iostream>
#include <string>
#include "persona.h"
#include "trailer.h"
#include "subtitulo.h"

using namespace std;


class Capitulo{

public:

	Capitulo();

	Capitulo(string nombre, Persona persona, Trailer trailer, Subtitulo subtitulo);

	~Capitulo();

	string getNombre();
	void setNombre(string nombre);

	Persona getPersona();
	void setPersona(Persona persona);

	Trailer getTrailer();
	void setTrailer(Trailer trailer);

	Subtitulo getSubtitulo();
	void setSubtitulo(Subtitulo subtitulo);

private:

	string nombre;
	Persona persona;
	Trailer trailer;
	Subtitulo subtitulo;

};

#endif