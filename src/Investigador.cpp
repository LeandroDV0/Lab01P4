#include "../include/Investigador.h"
#include "../include/Publicacion.h"
#include <iostream>
#include <vector>

Investigador::Investigador()
{
}

Investigador::~Investigador()
{
    publicaciones.clear();
}

Investigador::Investigador(std::string ORCID, std::string nombre, std::string institucion)
{
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
}

std::string Investigador::toString() const
{
    return ORCID + "->" + nombre + "/" + institucion;
}

std::set<std::string> Investigador::listaPublicaciones(DTFecha fecha, std::string pal) const
{
    std::set<std::string> resultado;
    for (std::set<Publicacion *>::iterator it = this->publicaciones.begin(); it != this->publicaciones.end(); it++)
    {
        Publicacion* pub = *it;
        if (pub != NULL)
        {
            if (pub->getFecha() > fecha && pub->contienePalabra(pal))
            {
                resultado.insert(pub->getDOI());
            }
        }
    }
    return resultado;
} // nosotros asumimos que se listan las publicaciones a partit de el dia posterior de la fecha que le pasamos (no incluimos el dia)

std::string Investigador::getORCID() const
{
    return ORCID;
}

std::string Investigador::getNombre() const
{
    return nombre;
}

std::string Investigador::getInstitucion() const
{
    return institucion;
}

void Investigador::setORCID(std::string ORCID)
{
    this->ORCID = ORCID;
}
void Investigador::setNombre(std::string nombre)
{
    this->nombre = nombre;
}
void Investigador::setInstitucion(std::string institucion)
{
    this->institucion = institucion;
}

void Investigador::agregarPublicacion(Publicacion *pub)
{
    publicaciones.insert(pub);
}

std::set<Publicacion *> Investigador::getPublicaciones()
{
    return this->publicaciones;
}

void Investigador::eliminarPublicacion(Publicacion *pub)
{
    if(pub != NULL){
        publicaciones.erase(pub); // Si no esta pub, no pasa nada
    }
}
