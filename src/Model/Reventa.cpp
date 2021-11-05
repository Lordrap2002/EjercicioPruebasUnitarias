#include "Reventa.h"


Reventa::Reventa(string nombre, int id, Propiedad &propiedad) : Propietario(nombre, id, propiedad) {}

string Reventa::mostrarBeneficios(){
    return "1. Descuento el 0,05 en la mensualidad del gimnasio.\n";
}