#include "../include/ArticuloRevista.h"


ArticuloRevista :: ArticuloRevista(){

}

ArticuloRevista :: ~ArticuloRevista(){

}

ArticuloRevista :: ArticuloRevista(std::string DOI, std::string titulo, DTFecha fecha, std::string rev, std::string ext): Publicacion(DOI, titulo, fecha){
    this->revista = rev;
    this->extracto = ext;
}

std::string ArticuloRevista :: getRevista(){
    return this->revista ;
}

std::string ArticuloRevista :: getExtracto(){
    return this->extracto;
}

void ArticuloRevista :: setRevista(std::string rev){  
    this->revista = rev;                               // al ser un void no deberia llevar return
}

void ArticuloRevista :: setExtracto(std::string ext){
    this->extracto = ext;
}

char ArticuloRevista :: convertidorMinuscula(char c){
    if (c >= 'A' && c <= 'Z'){ // 'A'= 65, 'Z'= 90
        return c + 32; // diferencia entre ('a' y 'A')
    }else{
            return c;
        }
}

bool ArticuloRevista :: contienePalabra(std::string palabra){  
        int palabraLargo = palabra.length();                   
        int extractoLargo = extracto.length();

        if (palabraLargo == 0 || palabraLargo > extractoLargo) {
            return false;
        }

        int i = 0; 
        while (i <= extractoLargo - palabraLargo) { // si es mayor ya no existe esa palabra
            int j = 0; 
            while (j < palabraLargo && convertidorMinuscula(extracto[i + j]) == convertidorMinuscula(palabra[j])) {
                j++;
            }
            if (j == palabraLargo) {
                return true; // si j llega al final de la palabra entonces la encontramos
            }
            i++;
        }
        return false; 
}
