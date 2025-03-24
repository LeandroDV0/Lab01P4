#include "include/Publicacion.h"      // Para la clase abstracta y sus clases derivadas
#include "include/ArticuloRevista.h"  // Si tienes un archivo separado para cada clase derivada
#include "include/Libro.h"
#include "include/PaginaWeb.h"
#include "include/Investigador.h"      // Para la clase Investigador
#include <string>             // Por el uso de std::string en las definiciones de clase
#include <vector>             // Si estás usando vectores
#include <iostream>           // Para operaciones de entrada/salida
#include <set>                // Si usas conjuntos en alguna parte

#include <list>
#include <map>
#include "include/DTFecha.h"
#include "include/DTRefer.h"



std::list<Publicacion *> publicaciones;
std::map<std::string, Publicacion *> map_publicaciones;

std::list<Investigador *> investigadores;
std::map<std::string, Investigador *> map_investigadores;

void coleccion_guardarPublicacion(Publicacion *pub)
{
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion *> entry(pub->getDOI(), pub);
	map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion *pub)
{
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador *inv)
{
	investigadores.push_back(inv);
	std::pair<std::string, Investigador *> entry(inv->getORCID(), inv);
	map_investigadores.insert(entry);
}

Investigador *coleccion_getInvestigador(std::string ORCID)
{
	return map_investigadores[ORCID];
}

Publicacion *coleccion_getPublicacion(std::string DOI)
{
	return map_publicaciones[DOI];
}

void parte_a(){
	DTFecha fecha1 = DTFecha(15,5,2023);
	ArticuloRevista* art1 = new ArticuloRevista("10.1234/abc123", "Fundamentos de POO", fecha1, "Programación Avanzada", 
                                                "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.");
	DTFecha fecha2 = DTFecha(10,2,2024);
	ArticuloRevista* art2 = new ArticuloRevista("10.4567/jkl012", "Utilidad de diagramas UML", fecha2, "Modelado de Software", 
                                                "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.");
	publicaciones.push_back(art1); // esto agrega a la 'cola' el articulo
	publicaciones.push_back(art2);
}


void parte_b(){
	DTFecha fecha3 = DTFecha(20,8,2022);
	Libro* libro1 = new Libro ("10.2345/def456", "Patrones de Diseno en c++", fecha3, "Software Design", {"Diseno", "OOP", "Class"});
	
	DTFecha fecha4 = DTFecha(20,8,2022);
	Libro* libro2 = new Libro ("10.5678/mno345", "Guia de UML", fecha4, "IEEE", {"Diagramas", "UML", "Software", "Modelado"});
	
	publicaciones.push_back(libro1);
	publicaciones.push_back(libro2);
}

void parte_c(){
	DTFecha fecha5 = DTFecha(20,10,2024);
	PaginaWeb* paginaWeb = new PaginaWeb ("www.umlparaprincipiantes.com", "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades.", "10.3456/ghi789", "Diagramas para Principiantes", fecha5);
	publicaciones.push_back(paginaWeb);
}

void parte_d(){
	for (std::list<Publicacion*>::iterator it = publicaciones.begin(); it != publicaciones.end(); ++it){
		DTRefer  ref = it.getTD();
		std::cout << ref << std::endl;
	}
}

void parte_e(){

}

void parte_f(){
}

void parte_g()
{
}

void parte_h()
{
}

void parte_i()
{
}

void parte_j()
{
}

void parte_k()
{
}

int main()
{
	std::cout << "parte_a" << std::endl;
	parte_a();
	std::cout << "parte_b" << std::endl;
	parte_b();
	std::cout << "parte_c" << std::endl;
	parte_c();
	std::cout << "parte_d" << std::endl;
	parte_d();
	std::cout << "parte_e" << std::endl;
	parte_e();
	std::cout << "parte_f" << std::endl;
	parte_f();
	std::cout << "parte_g" << std::endl;
	parte_g();
	std::cout << "parte_h" << std::endl;
	parte_h();
	std::cout << "parte_i" << std::endl;
	parte_i();
	std::cout << "parte_j" << std::endl;
	parte_j();
	std::cout << "parte_k" << std::endl;
	parte_k();
	std::cout << "cleanUp" << std::endl;
	cleanUp();
	std::cout << "fin" << std::endl;

	return 0;
}
