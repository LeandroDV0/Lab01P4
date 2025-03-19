#ifndef LIBRO
#define LIBRO

#include <string>
#include <iostream>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Publicacion.h"

class Libro : public Publicacion
{
private:
    std::string editorial;
    // crear lista palabras destacadas
    //  void setPalabrasDestacadas(string);
public:
    Libro();
    ~Libro();
    Libro(std::string);
    std::string getEditorial(std::string);
    bool contienePalabra(std::string);
};

#endif
