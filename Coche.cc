#include "Coche.hh"

#include<iostream>

struct fecha{
   int dia;
   int mes;
   int ano; 
};

using namespace std;

Coche::Coche() {
    matricula="undefined";
    marca="undefined";
    ano_de_matriculacion=0;
    disponible=false;
    data={0,0,0};
}

Coche::Coche(string matricula, string marca, int ano_de_matriculacion, bool disponible) {
    this->matricula = matricula;
    this->marca = marca;
    this->ano_de_matriculacion = ano_de_matriculacion;
    this->disponible = disponible;
    data={0,0,0};
}

Cliente Coche::consultar_arrendador(){
    return arrendador;
}

void Coche::anadir_arrendador(Cliente cliente) {
    arrendador = cliente;
}

void Coche::cambiar_fecha(fecha data) {
    data = data;
}

void Coche::recargar_arrendador(Cliente cliente) {
    arrendador = cliente;
}

void Coche::escriure() {
    cout << arrendador.consultar_DNI() << endl;
}