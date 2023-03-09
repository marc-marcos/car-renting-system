#include<iostream>
#include "Cliente.hh"
#include "Coche.hh"

using namespace std;

int main() {
    Cliente c;
    c.leer();

    Coche c2("A", "A", 2002, true);
    c2.anadir_arrendador(c);
    c2.consultar_arrendador().escribir();

    c.modificar_aptitud(false);

    c2.consultar_arrendador().escribir();
}