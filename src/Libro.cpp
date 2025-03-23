<<<<<<< HEAD
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
    
>>>>>>> 901bc37 (Actualizada Libro.cpp)
=======
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
>>>>>>> 42c9f2f (Actualizada Libro.cpp)
