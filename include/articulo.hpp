#pragma once
#include <iostream>
using namespace std;

namespace parcial
{
    class Articulo{
        private:
            string codigo;
            string nombre;
            double precio;
        public:
            Articulo(string codigo, string nombre, double precio);
            string getCodigo();
            string getNombre();
            double getPrecio();
    };
}