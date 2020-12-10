
#ifndef PLATAFORMA_H
#define PLATAFORMA_H

#include <iostream>
#include <string>

using namespace std;

class Plataforma{

public:

	Plataforma();
	
	Plataforma(string nombre, Serie serie);

	~Plataforma();

	float getNombre();
	void setNombre(string nombre);

	Serie getSerie();
	void setSerie(Serie serie);

private:

	string nombre;
	Serie serie;

};

#endif