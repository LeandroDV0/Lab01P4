#include "../include/Publicacion.h"

Publicacion ::Publicacion()
{
    this->DOI = "";
    this->titulo = "";
    this->fecha = DTFecha();
    set<Investigador *> autores;
    this->autores = autores;
}

Publicacion ::Publicacion(string DOI, string titulo, DTFecha fecha)
{
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
    set<Investigador *> autores;
    this->autores = autores;
}

Publicacion ::~Publicacion()
{
    this->fecha.~DTFecha();

}

DTFecha Publicacion::getFecha()
{
    return this->fecha;
}

string Publicacion::getDOI()
{
    return this->DOI;
}

string Publicacion::getTitulo()
{
    return this->titulo;
}

void Publicacion::setFecha(DTFecha fecha)
{
    this->fecha = fecha;
}

void Publicacion::setDOI(string DOI)
{
    this->DOI = DOI;
}

void Publicacion::setTitulo(string titulo)
{
    this->titulo = titulo;
}

// No se declara una implementacion para un metodo abstracto puro (contienePalabra).

DTRefer Publicacion::getDT()
{
    std::set<std::string> autores;
    for (std::set<Investigador *>::const_iterator it = this->autores.begin(); it != this->autores.end(); ++it)
    {
        Investigador* aut = *it;
        if (aut != NULL) {
            autores.insert(aut->getNombre());
        } else {
            std::cout << "Advertencia: investigador nulo encontrado en los autores" << std::endl;
        }
    }
    
    // Retornar el objeto DTRefer con los datos correspondientes
    return DTRefer(this->DOI, this->titulo, this->fecha, autores);
}

void Publicacion::setAutores(set<Investigador *> autores)
{
    this->autores = autores;
}

set<Investigador *> Publicacion::getAutores()
{
    return this->autores;
}

void Publicacion::agregarAutor(Investigador *inv)
{
    this->autores.insert(inv);
}

void Publicacion::eliminarInvestigador(Investigador *inv){
    if(inv != NULL){
        autores.erase(inv); // Si no esta pub, no pasa nada
    }
}