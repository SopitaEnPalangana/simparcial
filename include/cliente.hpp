#pragma once
#include <iostream>
using namespace std;

namespace parcial
{
    class Cliente{
        private:
            string codigo;
            string nombre;
            string domicilio;
        public:
            Cliente(string codigo, string nombre, string domicilio);
            string getCodigo();
            string getNombre();
            string getDomicilio();
    };
}