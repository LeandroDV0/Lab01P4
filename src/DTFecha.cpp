#include "../include/DTFecha.h"

// No se si aca tiene que ir de nuevo la definicion de los metodos como en P2

DTFecha::DTFecha()
{
    this->dia = 1;
    this->mes = 1;
    this->anio = 1;
}

DTFecha::DTFecha(int dia, int mes, int anio)
{
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

DTFecha::~DTFecha()
{
}

int DTFecha::get_dia()
{
    return this->dia;
}

int DTFecha::get_mes()
{
    return this->mes;
}

int DTFecha::get_anio()
{
    return this->anio;
}
std::ostream& operator<<(std::ostream& os,  DTFecha& fecha) {
    os << fecha.get_dia() << "/" << fecha.get_mes() << "/" << fecha.get_anio();
    return os;
}

bool DTFecha::operator>(const DTFecha& otra) const {
    if (anio != otra.anio) return anio > otra.anio;
    if (mes != otra.mes) return mes > otra.mes;
    return dia > otra.dia;
}

