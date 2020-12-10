
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <vector>

#include "serie.h"

using namespace std;

int main(int argc, char const *argv[]){

	vector<Serie> listaSerie;

	ifstream archivo;

	string linea;

	archivo.open("Series.txt", ios::in);

	if(archivo.fail()){

		cout<<"Error al abrir el archivo.";
		exit(1);

	}

		listaSerie.push_back(Serie(getline(archivo,linea), Temporada(getline(archivo,linea), Capitulo(getline(archivo,linea), Persona(getline(archivo,linea), getline(archivo,linea)), Trailer(getline(archivo,linea)), Subtitulo(getline(archivo,linea))))));

		cout<<linea<<"\n";
		

    return 0;
}

