#include "Investigador.h"

#include <iostream>

Investigador::Investigador(std::string ORCID, std::string nombre, std::string institucion){
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
}

Investigador::~Investigador(){
    publicaciones.clear;
}

std::string Investigador:: getORCID() const{
    return ORCID;
}

std::string Investigador:: getNombre() const{
    return nombre;
}

std::string Investigador:: getInstitucion() const{
    return institucion;
}

std::string Investigador:: toString(){
    return ORCID + "->" + nombre + "/" + institucion;
}

void Investigador::setORCID(std::string ORCID){
    this->ORCID = ORCID;
}
void Investigador::setNombre(std::string nombre){
    this->nombre = nombre;
}
void Investigador::setInstitucion(std::string institucion){
    this->institucion = institucion;
}