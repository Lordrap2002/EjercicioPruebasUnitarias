#include "Fundador.h"

Fundador::Fundador(string nombre, int id, Propiedad &propiedad) : Propietario(nombre, id, propiedad) {}

string Fundador::mostrarBeneficios(){
    return "1. Derecho a usar el salón social de manera gratuita.\n2. Descuento del 1 para la compra de productos en la tienda del edificio.\n";
}


