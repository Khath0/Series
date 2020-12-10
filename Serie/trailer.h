
#ifndef TRAILER_H
#define TRAILER_H

#include <iostream>
#include <string>

using namespace std;

class Trailer{

public:

	Trailer();
	
	Trailer(string nombre);

	~Trailer();

	string getNombre();
	void setNombre(string nombre);

private:

	string nombre;

};

#endif