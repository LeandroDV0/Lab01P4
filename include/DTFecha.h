#ifndef DTFECHA
#define DTFECHA

#include <string>
#include <iostream>

class DTFecha
{
private:
    int dia, mes, anio;

public:
    DTFecha();
    ~DTFecha();
    DTFecha(int, int, int);
    int get_dia();
    int get_mes();
    int get_anio();
    bool operator>(const DTFecha &otra) const;
};
std::ostream &operator<<(std::ostream &, DTFecha);
#endif
