#include "../include/Publicacion.h"

Publicacion ::Publicacion()
{
    this->DOI = "";
    this->titulo = "";
    this->fecha = DTFecha();
}

Publicacion ::Publicacion(std::string DOI, std::string titulo, DTFecha fecha)
{
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
}

Publicacion ::~Publicacion()
{
    this->fecha.~DTFecha();
}

DTFecha Publicacion::getFecha()
{
    return this->fecha;
}

std::string Publicacion::getDOI()
{
    return this->DOI;
}

std::string Publicacion::getTitulo()
{
    return this->titulo;
}

void Publicacion::setFecha(DTFecha fecha)
{
    this->fecha = fecha;
}

std::string Publicacion::getDOI()
{
    return this->DOI;
}

std::string Publicacion::getTitulo()
{
    return this->titulo;
}