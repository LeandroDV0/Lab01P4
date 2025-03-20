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