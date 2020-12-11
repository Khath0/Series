 
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <vector>

#include "serie.h"

using namespace std;

int menu();

void acciones(int opcion);

int main(int argc, char const *argv[]){

	vector<Serie> listaSerie;

	ifstream archivo;

	string nombreSerie;
	string *puntNombreSerie = &nombreSerie;

	string nombreTemporada;
	string *puntNombreTemporada = &nombreTemporada;

	string nombreCapitulo;
	string *puntNombreCapitulo = &nombreCapitulo;

	string nombrePersona;
	string *puntNombrePersona = &nombrePersona;

	string rolPersona;
	string *puntRolPersona = &rolPersona;

	string nombreTrailer;
	string *puntNombreTrailer = &nombreTrailer;

	string idiomaSubtitulo;
	string *puntIdiomaSubtitulo = &idiomaSubtitulo;

	int opcion;

	archivo.open("Series.txt", ios::in);

	if(archivo.fail()){

		cout<<"Error al abrir el archivo.";
		exit(1);

	}

	getline(archivo,*puntNombreSerie);
	getline(archivo,*puntNombreTemporada);
	getline(archivo,*puntNombreCapitulo);
	getline(archivo,*puntNombrePersona);
	getline(archivo,*puntRolPersona);
	getline(archivo,*puntNombreTrailer);
	getline(archivo,*puntIdiomaSubtitulo);

	listaSerie.push_back(Serie(nombreSerie, Temporada(nombreTemporada, Capitulo(nombreCapitulo, Persona(nombrePersona, rolPersona), Trailer(nombreTrailer), Subtitulo(idiomaSubtitulo)))));

	cout<<"Nombre de la Serie: "<<listaSerie[0].getNombre()<<"\n";
	cout<<"Nombre de la Temporada: "<<listaSerie[0].getTemporada().getNombre()<<"\n";
	cout<<"Nombre del Capitulo: "<<listaSerie[0].getTemporada().getCapitulo().getNombre()<<"\n";
	cout<<"Nombre de la Persona: "<<listaSerie[0].getTemporada().getCapitulo().getPersona().getNombre()<<"\n";
	cout<<"Rol de la Persona: "<<listaSerie[0].getTemporada().getCapitulo().getPersona().getRol()<<"\n";
	cout<<"Nombre del Trailer: "<<listaSerie[0].getTemporada().getCapitulo().getTrailer().getNombre()<<"\n";
	cout<<"Idioma de los Subtitulos: : "<<listaSerie[0].getTemporada().getCapitulo().getSubtitulo().getLenguaje()<<"\n\n";

	getline(archivo, *puntNombreSerie);
	getline(archivo,*puntNombreTemporada);
	getline(archivo,*puntNombreCapitulo);
	getline(archivo,*puntNombrePersona);
	getline(archivo,*puntRolPersona);
	getline(archivo,*puntNombreTrailer);
	getline(archivo,*puntIdiomaSubtitulo);

	listaSerie.push_back(Serie(nombreSerie, Temporada(nombreTemporada, Capitulo(nombreCapitulo, Persona(nombrePersona, rolPersona), Trailer(nombreTrailer), Subtitulo(idiomaSubtitulo)))));

	cout<<"Nombre de la Serie: "<<listaSerie[1].getNombre()<<"\n";
	cout<<"Nombre de la Temporada: "<<listaSerie[1].getTemporada().getNombre()<<"\n";
	cout<<"Nombre del Capitulo: "<<listaSerie[1].getTemporada().getCapitulo().getNombre()<<"\n";
	cout<<"Nombre de la Persona: "<<listaSerie[1].getTemporada().getCapitulo().getPersona().getNombre()<<"\n";
	cout<<"Rol de la Persona: "<<listaSerie[1].getTemporada().getCapitulo().getPersona().getRol()<<"\n";
	cout<<"Nombre del Trailer: "<<listaSerie[1].getTemporada().getCapitulo().getTrailer().getNombre()<<"\n";
	cout<<"Idioma de los Subtitulos: : "<<listaSerie[1].getTemporada().getCapitulo().getSubtitulo().getLenguaje();

	opcion=menu();

	acciones(opcion);

    return 0;
}

int menu(){

	int opcion;
	int *puntOpcion = &opcion;

	cout<<"\n\n-->Bienvenido a Series<--\n";
	cout<<"Opcion 1: Ingresar Serie\n";
	cout<<"Opcion 2: Ingresar Temporada\n";
	cout<<"Opcion 3: Ingresar Capitulo\n";
	cout<<"Opcion 4: Ingresar Participantes de un Capitulo\n";
	cout<<"Opcion 5:Ingresar Trailer\n";
	cout<<"Opcion 6: Ingresar Subtitulo\n";
	cout<<"Opcion 7: Ingresar Usuario\n";
	cout<<"Opcion 8: Ingresar Critica\n";
	cout<<"Opcion 9: Ingresar Puntuacion\n";
	cout<<"Opcion 10: Ingresar Plataforma de TV\n";
	cout<<"Opcion 11: Listar Actores de una Serie\n";
	cout<<"Opcion 12: Listar nombres de Capitulos de una Serie\n";
	cout<<"Opcion 13: Listar los usuarios del sistema\n\n";

	cout<<"Ingrese una opcion: ";
	cin>>*puntOpcion;

	while (opcion<1 or opcion>13){
		cout<<"Opcion Invalida\n";
		cout<<"Ingrese una opcion: ";
		cin>>*puntOpcion;
	}

	return opcion;

}

void acciones(int opcion){

	if (opcion==1){

		cout<<"\nIngrese una Serie: ";

	}

}