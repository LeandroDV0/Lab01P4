#ifndef ARTICULOREVISTA
#define ARTICULOREVISTA

#include <string>
#include <iostream>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Publicacion.h"

class ArticuloRevista : public Publicacion
{
private:
    std::string revista;
    std::string extracto;  
public:
    ArticuloRevista();
    ~ArticuloRevista();
    ArticuloRevista(std::string, std::string, DTFecha, std::string , std::string);
    virtual bool contienePalabra(std::string);
    std::string getRevista();
    std::string getExtracto();
    void setRevista(std::string);
    void setExtracto(std::string);
};

#endif
