
Serie.exe : obj/main.o obj/serie.o obj/temporada.o obj/capitulo.o obj/persona.o obj/trailer.o obj/subtitulo.o obj/plataforma.o
	g++ -o Serie.exe obj/main.o obj/serie.o obj/temporada.o obj/capitulo.o obj/persona.o obj/trailer.o obj/subtitulo.o obj/plataforma.o
obj/main.o : main.cc obj/serie.o obj/temporada.o obj/capitulo.o obj/persona.o obj/trailer.o obj/subtitulo.o obj/plataforma.o
	g++ main.cc -c -o obj/main.o
obj/serie.o : serie.h serie.cc
	g++ serie.cc -c -o obj/serie.o
obj/temporada.o : temporada.h temporada.cc
	g++ temporada.cc -c -o obj/temporada.o
obj/capitulo.o : capitulo.h capitulo.cc
	g++ capitulo.cc -c -o obj/capitulo.o
obj/persona.o : persona.h persona.cc
	g++ persona.cc -c -o obj/persona.o
obj/trailer.o : trailer.h trailer.cc
	g++ trailer.cc -c -o obj/trailer.o
obj/subtitulo.o : subtitulo.h subtitulo.cc
	g++ subtitulo.cc -c -o obj/subtitulo.o
obj/plataforma.o : plataforma.h plataforma.cc
	g++ plataforma.cc -c -o obj/plataforma.o



