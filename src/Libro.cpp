
#include "../include/Libro.h"

Libro :: Libro(){
}

Libro :: ~Libro(){
}

Libro::Libro(std::string DOI, std::string titulo, DTFecha fecha, std::string editorial, std::set<std::string> palabrasDestacadas): Publicacion(DOI, titulo, fecha) {
    this->editorial = editorial;
    this->palabrasDestacadas = palabrasDestacadas; 
}

std::string Libro::getEditorial() {
    return editorial;
}

std::set<std::string> Libro::getPalabrasDestacadas(){
    return palabrasDestacadas;

}


void Libro::setPalabrasDestacadas(std::set<std::string> nuevasPalabras) {
    palabrasDestacadas = nuevasPalabras;
} 

void Libro::setEditorial(std::string nuevaEditorial) {
    editorial = nuevaEditorial;
}

bool Libro::contienePalabra(std::string palabra) {
    for (size_t i = 0; i < palabra.length(); i++) {
        palabra[i] = toupper(palabra[i]);
    }
    for (std::set<std::string>::iterator it = palabrasDestacadas.begin(); it != palabrasDestacadas.end(); ++it) {
        std::string destacada = *it;
        for (size_t i = 0; i < destacada.length(); i++) {
            destacada[i] = toupper(destacada[i]);
        }
        if (palabra == destacada) {
            return true;
        }
    }
    return false;
}


// si no podemos hacer strin.upper entonces hay que hacerlo con ASCII
    
