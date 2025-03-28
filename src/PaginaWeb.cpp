#include "../include/PaginaWeb.h"

PaginaWeb ::PaginaWeb()
{
    URL = "";
    contenidoExtraido = "";
}

PaginaWeb ::~PaginaWeb()
{
}

PaginaWeb ::PaginaWeb(std::string URL, std::string contenidoExtraido, std::string DOI, std::string titulo, DTFecha fecha): Publicacion(DOI, titulo, fecha)
{
    this->URL = URL;
    this->contenidoExtraido = contenidoExtraido;
}

std::string PaginaWeb::getURL()
{
    return URL;
}

std::string PaginaWeb ::getContenidoExtraido()
{
    return contenidoExtraido;
}

void PaginaWeb ::setURL(std::string URL)
{
    this->URL = URL;
}

void PaginaWeb::setContenidoExtraido(std::string contenidoExtraido)
{
    this->contenidoExtraido = contenidoExtraido;
}

std::string PaginaWeb :: convertirMayuscula(std::string &palabra)
{
    std::string copia = palabra;
    int largoPalabra = palabra.length();
    for(int i = 0; i < largoPalabra; i++)
    {
        copia[i] = toupper(palabra[i]);
    }
    return copia;
}

bool PaginaWeb ::contienePalabra( std::string palabra)
{ 

    int largoContenido = contenidoExtraido.length();
    int largoPalabra = palabra.length();
    std::string contenidoExtraidoMayus = convertirMayuscula(contenidoExtraido);
    std::string palabraMayus = convertirMayuscula(palabra);

    if (largoContenido >= largoPalabra)
    {
        for (int i = 0; i <= largoContenido-largoPalabra; i++)
        {

            int j = 0;

            while (j < largoPalabra && contenidoExtraidoMayus[i + j] == palabraMayus[j]) // caracter por caracter
                j++;

            if (j == largoPalabra)
                return true; // se encontro la palabra.
        }
    }
   return false;
}
