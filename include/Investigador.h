#ifndef PAGINAWEB
#define PAGINAWEB

#include <string>
#include <iostream>
#include <set>
#include "DTFecha.h"
#include "DTRefer.h"
// #include "Publicacion.h" diagrama doble flecha

class Publicacion;

class Investigador
{
private:
    std::string ORCID;
    std::string nombre;
    std::string institucion;
    std::set<Publicacion*> publicaciones;
public:
    Investigador();
    ~Investigador();
    Investigador(std::string, std::string, std::string);
    
    std::string toString();
    std::set<Publicacion> listaPublicaciones(DTFecha, std::string);

    std::string getORCID() const;
    std::string getNombre() const;
    std::string getInstitucion() const;
    void setORCID(std::string);
    void setInstitucion(std::string);
    void setNombre(std::string);
};

#endif