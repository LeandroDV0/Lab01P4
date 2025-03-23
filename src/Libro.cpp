
#include "../include/Libro.h"

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

bool Libro:: contienePalabra(std::string palabra){
    for ( destacada : palabrasDestacadas) { // recorre todos los elementos del conjunto palabrasDestacadas.
        if (destacada == palabra) { // Distingue entre mayusculas y minusculas
            return true; 
        }
    }
    return false; 
}

//No diferencia mayuscula de minuscula
/*
bool Libro:: contienePalabra (std::string palabra){
    std::sritng mayuscula = string.upper(palabra); 
    for (const auto& destacada : palabrasDestacadas ){
        std::sritng mayuDest = string.upper(destacada);
        if (mayuscula == mayuDest){
            return true;
        }
    }
    return false;
} 
*/
// si no podemos hacer strin.upper entonces hay que hacerlo con ASCII
    
