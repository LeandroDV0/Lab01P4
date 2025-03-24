#ifndef PAGINAWEB
#define PAGINAWEB

#include <string>
#include <iostream>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Publicacion.h"

class PaginaWeb : public Publicacion
{
private:
    std::string URL;
    std::string contenidoExtraido;
public:
    PaginaWeb();
    ~PaginaWeb();
    PaginaWeb(std::string , std::string, std::string, std::string, DTFecha );
    virtual bool contienePalabra( std::string );
    std::string getURL();
    std::string getContenidoExtraido();
    void setURL( std::string);
    void setContenidoExtraido( std::string);
};

#endif
