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

std::string DTRefer::getDOI()const
{
    return this->DOI;
}

std::string DTRefer::getTitulo() const
{
    return this->titulo;
}

DTFecha DTRefer::getFecha()const
{
    return this->fecha;
}

std::set<std::string> DTRefer::getAutores()const
{
    return this->autores;
}

// Definición de la sobrecarga de <<
std::ostream& operator<<(std::ostream& salida, const DTRefer& DT) {
    std::string nombres = "";
    for (const std::string& autor : DT.getAutores()) {
        if(nombres.empty()){
            nombres = autor;
        }else{
            nombres = nombres+","+autor;
        }
    }
    
    
    salida << DT.getDOI() << "->" << DT.getTitulo() << "(" << DT.getFecha().get_dia() << "/" <<DT.getFecha().get_mes() << "/" << DT.getFecha().get_anio() << ")/" << nombres;
    return salida;
}