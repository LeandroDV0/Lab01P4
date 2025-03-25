#include "../include/Publicacion.h"

Publicacion ::Publicacion()
{
    this->DOI = "";
    this->titulo = "";
    this->fecha = DTFecha();
}

Publicacion ::Publicacion(string DOI, string titulo, DTFecha fecha)
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
    set <string> autores;
    for (const Investigador& element : this->autores) {
       autores.insert(element.getNombre());
    }
    return DTRefer(this->DOI, this->titulo, this->fecha, autores);
}

void Publicacion::setAutores(set<Investigador> autores){
    this->autores = autores;
}

set<Investigador> Publicacion::getAutores(){
    return this->autores;
}