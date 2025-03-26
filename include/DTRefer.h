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
	std::string getDOI() const;
	std::string getTitulo() const;
	DTFecha getFecha() const;
	std::set<std::string> getAutores() const;
};
// friend std::iostream& operator<<(std::iostream, DTRefer);
std::ostream &operator<<(std::ostream &, DTRefer &);
#endif
