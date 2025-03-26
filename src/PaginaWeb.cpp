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

bool PaginaWeb ::contienePalabra( std::string palabra)
{ // se puede usar find()?

    int largoContenido = contenidoExtraido.length();
    int largoPalabra = palabra.length();

    if (largoContenido >= largoPalabra)
    {
        for (int i = 0; i <= largoContenido; i++)
        {

            int j = 0;

            while ((j < largoPalabra) && (contenidoExtraido[i + j] == palabra[j])) // caracter por caracter
                j++;

            if (j == largoPalabra)
                return true; // se encontro la palabra.
        }
    }
    else
        return false;
}
