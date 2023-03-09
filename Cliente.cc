#include "Cliente.hh"

#include<iostream>

using namespace std;

Cliente::Cliente() {
    dni=0;
    carnet_de_conducir=0;
    genero='n';
    apto=false;
}

Cliente::Cliente(int dni){
    this->dni = dni;
    carnet_de_conducir=0;
    genero='n';
    apto=false;
}

Cliente::Cliente(int dni, char genero) {
    this->dni = dni;
    carnet_de_conducir=0;
    this->genero = genero;
    apto=false;
}

Cliente::Cliente(int dni, char genero, bool apto) {
    this->dni = dni;
    this->genero = genero;
    this->apto = apto;
    carnet_de_conducir = 0;
}

Cliente::Cliente(int dni, char genero, bool apto, int carnet_de_conducir) {
    this->dni = dni;
    this->genero = genero;
    this->apto = apto;
    this->carnet_de_conducir = carnet_de_conducir;
}

// Operaciones

void Cliente::anadir_genero(char genero) {
    this->genero = genero;
}

void Cliente::modificar_aptitud(bool apto) {
    this->apto = apto;
}

void Cliente::recalcular_aptitud() {
    if ((genero != 'n' and dni != 0 and carnet_de_conducir != 0)) apto=true;
    else apto=false;
}

int Cliente::consultar_DNI() const{
    return dni;
}

bool Cliente::es_apto() const {
    return apto;
}

// Lectura y escritura

void Cliente::leer() {
    cin >> dni >> carnet_de_conducir >> genero >> apto;
}

void Cliente::escribir() const{
    cout << "DNI: " << dni << endl;
    cout << "Carnet de conducir: " << carnet_de_conducir << endl;
    cout << "Genero: " << genero << endl;
    
    if (apto == true) {
        cout << "Apto: SÍ" << endl;
    }

    else {
        cout << "Apto: NO" << endl;
    }
}
