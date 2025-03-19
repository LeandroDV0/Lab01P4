#ifndef PAGINAWEB
#define PAGINAWEB

#include <string>
#include <iostream>
#include "DTFecha.h"
#include "DTRefer.h"
// #include "Publicacion.h" diagrama doble flecha

class Investigador
{
private:
    std::string ORCID;
    std::string nombre;
    std::string institucion;

public:
    Investigador();
    ~Investigador();
    std::string toString();
    // std::set<Publicacion> listaPublicaciones(DTFecha, String);
    // std::set<std::string> listarPublicaciones(DTFecha, std::string);
    std::string getORCID();
    std::string getNombre;
};

#endif