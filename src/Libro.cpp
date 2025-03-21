#include "Libro.h"

Libro :: Libro(){
}

Libro :: ~Libro(){
}

Libro::Libro(std::string editorial, std::set<std::string> palabrasDestacadas) {
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

bool Libro::contienePalabra(std::string palabra){
    for  (const auto& destacada : palabrasDestacadas) { // recorre todos los elementos del conjunto palabrasDestacadas. En cada iteracion destacada tomara el valor de una palabra dentro de palabrasDestacadas. Desventaja crea una copia  si usas const &auto detacada hace una referencia
        if (destacada == palabra) { 
            return true; 
        }
    }
    return false; 
}

