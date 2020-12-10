
#ifndef SUBTITULO_H
#define SUBTITULO_H

#include <iostream>
#include <string>

using namespace std;

class Subtitulo{

public:

	Subtitulo();
	
	Subtitulo(string lenguaje);

	~Subtitulo();

	string getLenguaje();
	void setLenguaje(string lenguaje);

private:

	string lenguaje;

};

#endif