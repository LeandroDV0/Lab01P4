#ifndef PUBLICACION
#define PUBLICACION

#include <string>
#include <iostream>
#include <vector>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Investigador.h"
using namespace std; //agregue esto para la parte g del main

class Investigador; // Ya que investigador va a referenciar a Publicacion, defino investigador aca para que no haya problemas
class DTRefer;

class Publicacion
{
private:
    std::string DOI;
    std::string titulo;
    DTFecha fecha;
    std::set<Investigador> autores;
    vector<Investigador*> InvestigadorPublicacion; //agregue esto para la parte g del main

public:
    Publicacion();
    ~Publicacion();
    Publicacion(std::string, std::string, DTFecha);
    DTRefer getDT();
    virtual bool contienePalabra(std::string) = 0; // operacion abstracta
    DTFecha getFecha();
    std::string getDOI();
    std::string getTitulo();
    void setDOI(std::string);
    void setTitulo(std::string);
    void setFecha(DTFecha);
    void setInvestigador(Investigador*); //agregue esto para la parte g del main
};
// el .h parece correcto
#endif