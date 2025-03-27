#include "../include/DTRefer.h"
// DOI, titulo, fecha, set autores

DTRefer::DTRefer()
{
    this->DOI = "";
    this->titulo = "";

    this->fecha = DTFecha();
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

std::string DTRefer::getDOI() const
{
    return this->DOI;
}

std::string DTRefer::getTitulo() const
{
    return this->titulo;
}

DTFecha DTRefer::getFecha() const
{
    return this->fecha;
}

std::set<std::string> DTRefer::getAutores() const
{
    return this->autores;
}

// Definición de la sobrecarga de <<
std::ostream &operator<<(std::ostream &salida, const DTRefer &DT)
{
    const std::set<std::string> &autores = DT.getAutores();

    std::string nombres = "";
    for (std::set<std::string>::const_iterator it = autores.begin(); it != autores.end(); ++it)
    {
        if (!nombres.empty())
        {
            nombres += ", ";
        }
        nombres += *it;
    }

    salida << DT.getDOI()
           << " -> " << DT.getTitulo()
           << " (" << DT.getFecha().get_dia()
           << "/" << DT.getFecha().get_mes()
           << "/" << DT.getFecha().get_anio()
           << ") / " << nombres;

    return salida;
}