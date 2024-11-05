#pragma once
#include <iostream>
#include <list>
#include <string>
#include "cliente.hpp"
#include "articulo.hpp"
using namespace std;

namespace parcial
{
    class Pedido{
        private:
            string codigo;
            list<Articulo*> listart;
            Cliente* cliente;
        public:
            Pedido(string codigo, Cliente* cliente);
            void compra(Articulo* articulo);
            void mostrar();
    };
}