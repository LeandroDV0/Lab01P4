#ifndef DTREFER
#define DTREFER

#include <string>
#include <iostream>
#include <map>
#include "DTFecha.h"

class DTFecha;

class DTRefer
{
private:
	std::string DOI;
	std::string titulo;
	DTFecha fecha;
	std::map<int, std::string> autores;

public:
	DTRefer();
	~DTRefer();
	void setFecha(DTFecha);
	void setTitulo(std::string);
	std::string getDOI();
	std::string getTitulo();
	DTFecha getFecha();
};

#endif
