#ifndef LIBRO
#define LIBRO

#include <string>
#include <iostream>
#include <set>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Publicacion.h"

class Libro : public Publicacion
{
private:
    std::string editorial;
    std::set<std::string> palabrasDestacadas;

public:
    Libro();
    ~Libro();
    Libro(std::string, std::string, DTFecha,std::string, std::set<std::string>);
    std::string getEditorial();
    std::set<std::string> getPalabrasDestacadas();
    void setEditorial(std::string);
    void setPalabrasDestacadas(std::set<std::string>); // Esto capaz que requiere cambios para una implementacion
    virtual bool contienePalabra(std::string);
    std::string convertirMayus(std::string &);
};

#endif
