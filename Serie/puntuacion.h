
#ifndef PUNTUACION_H
#define PUNTUACION_H

#include <iostream>
#include <string>

using namespace std;

class Puntuacion{

public:

	Puntuacion();
	
	Puntuacion(float puntuacion);

	~Puntuacion();

	float getPuntuacion();
	void setPuntuacion(float puntuacion);

private:

	float puntuacion;

};

#endif