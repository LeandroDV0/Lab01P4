#include "../include/DTRefer.h"
// DOI, titulo, fecha, set autores

DTRefer::DTRefer()
{
    this->DOI = "";
    this->titulo = "";
    DTFecha *titulo = new DTFecha();
    std::set<std::string> autores;
    this->autores = autores;
}

DTRefer::DTRefer(std::string DOI, std::string titulo, DTFecha fecha, std::set<std::string> autores)
{
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
    this->autores = autores;
}

DTRefer::~DTRefer()
{
    this->fecha.~DTFecha();

    // no es necesario borrar el set porque fue creado estaticamente
}

std::string DTRefer::getDOI()
{
    return this->DOI;
}

std::string DTRefer::getTitulo()
{
    return this->titulo;
}

DTFecha DTRefer::getFecha()
{
    return this->fecha;
}

std::set<std::string> DTRefer::getAutores()
{
    return this->autores;
}