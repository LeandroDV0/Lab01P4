#include "PaginaWeb.h"

PaginaWeb :: PaginaWeb(){
    URL = "";
    contenidoExtraido = "";
}

PaginaWeb :: ~PaginaWeb(){
    delete[] URL;
    delete[] contenidoExtraido;
}

PaginaWeb :: PaginaWeb(const std::string& URL, const std::string& contenidoExtraido);{
    this->URL = URL;
    this->contenidoExtraido = contenidoExtraido;
}

std::string PaginaWeb:: getURL() {
    return URL;
}

std::string PaginaWeb :: getContenidoExtraido() {
    return contenidoExtraido;
}

void PaginaWeb ::  setURL(const std::string& URL) {
    this->URL = URL;
}

void PaginaWeb ::  setContenidoExtraidoL(const std::string& contenidoExtraido) {
    this->contenidoExtraido = contenidoExtraido;
}

boll PaginaWeb :: contienePalabra(const std::string &palabra); {                   // se puede usar find()?

    int largoContenido = contenidoExtraido.length();
    int largoPalabra = palabra.length();

    if (largoContenido >= largoPalabra) {
        for(int i = 0; i <= largoContenido; i++){
            
            int j = 0;

            while((j < largoPalabra) && (contenidoExtraido[i + j] == palabra[j]))  // caracter por caracter
                j++;

            if(j == largoPalabra) return true;                                     // se encontro la palabra.
        }
    } 
    else return false;
}