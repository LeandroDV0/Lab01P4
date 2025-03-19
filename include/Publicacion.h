#ifndef PUBLICACION
#define PUBLICACION

#include <string>
#include <iostream>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Investigador.h "

class DTFecha; // Para que compile sin necesidad de DTFecha
class Investigador;
class DTRefer;

class Publicacion
{
private:
    std::string DOI;
    std::string titulo;
    DTFecha fecha;

public:
    Publicacion();
    ~Publicacion();
    Publicacion(std::string, std::string, DTFecha);
    DTRefer getDT();
    virtual bool contienePalabra(std::string){}; // operacion abstracta
    DTFecha getFecha();
    std::string getDOI();
    std::string getTitulo();
    void setDOI(std::string);
    void setTitulo(std::string);
    void setFecha(std::string);
};
// el .h parece correcto
#endif