#ifndef PUBLICACION
#define PUBLICACION

#include <string>
#include <iostream>
#include "PaginaWeb.h"
#include "DTFecha.h"
#include "DTRefer.h"
#include "Investigador.h"

class Investigador; // Ya que investigador va a referenciar a Publicacion, defino investigador aca para que no haya problemas
class DTRefer;
using namespace std;

class Publicacion
{
private:
    string DOI;
    string titulo;
    DTFecha fecha;
    set<Investigador> autores;

public:
    Publicacion();
    ~Publicacion();
    Publicacion(string, string, DTFecha);
    DTRefer getDT();
    virtual bool contienePalabra(string) = 0; // operacion abstracta
    DTFecha getFecha();
    string getDOI();
    string getTitulo();
    void setDOI(string);
    void setTitulo(string);
    void setFecha(DTFecha);
    void setAutores(set<Investigador>);
    set<Investigador> getAutores();
};
// el .h parece correcto
#endif