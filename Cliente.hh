#ifndef CLIENTE_HH
#define CLIENTE_HH

#include<iostream>
#include<string>

class Cliente {
    private:
        int dni;
        int carnet_de_conducir;
        char genero;
        bool apto;

    
    public:
        // Constructores

        Cliente();
        Cliente(int dni);
        Cliente(int dni, char genero);
        Cliente(int dni, char genero, bool apto);
        Cliente(int dni, char genero, bool apto, int carnet_de_conducir);

        // Operaciones

        void anadir_genero(char genero);

        void modificar_aptitud(bool apto);

        void recalcular_aptitud();

        int consultar_DNI() const;

        bool es_apto() const;

        // Lectura y escritura

        void leer();

        void escribir() const;
};


#endif