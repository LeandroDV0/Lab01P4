#include "Investigador.h"

#include <iostream>

Investigador:: Investigador(){
}

Investigador:: ~Investigador(){
    for (Publicacion* pub: publicaciones){
        delete pub;
    }
    publicaciones.clear();
}

Investigador:: Investigador(std::string ORCID, std::string nombre, std::string institucion){
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
}

std::string Investigador:: toString() const{
    return ORCID + "->" + nombre + "/" + institucion;
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

void Investigador:: setORCID(std::string ORCID){
    this->ORCID = ORCID;
}
void Investigador:: setNombre(std::string nombre){
    this->nombre = nombre;
}
void Investigador:: setInstitucion(std::string institucion){
    this->institucion = institucion;
}

void Investigador::agregarPublicacion