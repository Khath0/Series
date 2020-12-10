
#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
#include "critica.h"
#include "puntuacion.h"

using namespace std;

class Usuario{

public:

	Usuario();
	
	Usuario(string nombre, Critica critica, Puntuacion puntuacion);

	~Usuario();

	string getNombre();
	void setNombre(string nombre);

	Critica getCritica();
	void setCritica(Critica critica);

	Puntuacion getPuntuacion();
	void setPuntuacion(Puntuacion puntuacion);

private:

	string nombre;
	Critica critica;
	Puntuacion puntuacion;

};

#endif