
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

bool Libro:: contienePalabra(std::string palabra){
    for ( const auto& destacada : palabrasDestacadas) { // recorre todos los elementos del conjunto palabrasDestacadas.
        if (destacada == palabra) { // Distingue entre mayusculas y minusculas
            return true; 
        }
    }
    return false; 
}

/*
bool Libro:: contienePalabra(std::string palabra){
    for (std::set <<std::string>::it = palabrasDestacadas.begin(); it!= palabrasDestacadas.end(); ++it ){
         std::string destacada = *it
        if (destacada == palabra) { // Distingue entre mayusculas y minusculas
            return true; 
        }
    }
    return false; 
}
*/

//muchas gracias federica
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
    
