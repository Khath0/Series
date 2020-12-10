
#ifndef CRITICA_H
#define CRITICA_H

#include <iostream>
#include <string>

using namespace std;

class Critica{

public:

	Critica();
	
	Critica(string texto);

	~Critica();

	string getTexto();
	void setTexto(string texto);

private:

	string texto;

};

#endif