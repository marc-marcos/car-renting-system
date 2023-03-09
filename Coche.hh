#ifndef CLIENT_HH
#define CLIENT_HH

#include<iostream>
#include<string>
#include "Cliente.hh"

struct fecha{
   int dia;
   int mes;
   int ano; 
};

using namespace std;

class Coche {
    private:
        string matricula;
        string marca;
        int ano_de_matriculacion;
        bool disponible;
        Cliente arrendador;
        fecha data;
    
    public:
        Coche();
        Coche(string matricula, string marca, int ano_de_matriculacion, bool disponible);

        // Operaciones

        void anadir_arrendador(Cliente cliente);

        void recargar_arrendador(Cliente cliente);

        void cambiar_fecha(fecha data);

        // Consultoras

        Cliente consultar_arrendador();

        void escriure();

};

#endif