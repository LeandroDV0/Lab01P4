#ifndef DTREFER
#define DTREFER

#include <string>
#include <iostream>
#include <set>
#include "DTFecha.h"

class DTRefer
{
private:
	std::string DOI;
	std::string titulo;
	DTFecha fecha;
	std::set<std::string> autores;


public: // A los datatypes no se le pueden cambiar valores, asi que elimine los setters
	DTRefer();
	DTRefer(std::string, std::string, DTFecha, std::set<std::string>);
	~DTRefer();
	std::string getDOI();
	std::string getTitulo();
	DTFecha getFecha();
	std::set<std::string> getAutores();
	
	
};
//friend std::iostream& operator<<(std::iostream, DTRefer);
std::ostream& operator<<(std::ostream&, DTRefer);
#endif
