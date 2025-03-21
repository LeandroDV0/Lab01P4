#include "Libro.h"

Libro :: Libro(){
}

Libro :: ~Libro(){
}

Libro::Libro(int identificador, DTFecha fecha, std::string editorial, std::set<std::string> palabrasDestacadas) {
    this->editorial = editorial;
    this->palabrasDestacadas = palabrasDestacadas; 
}

std::string Libro::getEditorial() {
    return editorial;
}

std::set<std::string> getPalabrasDestacadas(){
    return palabrasDestacadas;

};


void Libro::setPalabrasDestacadas(std::set<std::string> nuevasPalabras) {
    palabrasDestacadas = nuevasPalabras;
} 

void Libro::setEditorial(std::string nuevaEditorial) {
    editorial = nuevaEditorial;
}

bool contienePalabra(std::string palabra){
    for ( std::string destacada : palabrasDestacadas) { // recorre todos los elementos del conjunto palabrasDestacadas.
        if (destacada == palabra) { // Distingue entre mayusculas y minusculas
            return true; 
        }
    }
    return false; 
}
>>>>>>> 901bc37 (Actualizada Libro.cpp)
