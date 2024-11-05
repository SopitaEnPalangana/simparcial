#include <iostream>
#include "funciones.hpp"
#include "articulo.hpp"
#include "cliente.hpp"
#include "pedido.hpp"

using namespace parcial;

int main(){
    //crear algunos articulos
    Articulo* diclofenac = new Articulo("A001", "Diclofenac 50mg", 1500);
    Articulo* ibuprofeno = new Articulo("A002", "Ibuprofeno 600mg", 1600);
    Articulo* enalapril = new Articulo("A003", "Enalapril 10mg", 2000);

    //crear algunos clientes
    Cliente* Valentini = new Cliente("C001", "Valentini Luis", "Olazabal 1470");
    Cliente* Marfei = new Cliente("C002", "Marfei Ana Maria", "Moreno 5724");

    //hacer algunos pedidos
    Pedido* pedidoValentini = new Pedido("P001", Valentini);
    pedidoValentini->compra(diclofenac);
    pedidoValentini->compra(enalapril);

    Pedido* pedidoMarfei = new Pedido("P002", Marfei);
    pedidoMarfei->compra(ibuprofeno);
    pedidoMarfei->compra(diclofenac);

    //mostrar los pedidos en pantalla
    pedidoValentini->mostrar();
    pedidoMarfei->mostrar();
    pauseConsole();

    //liberar la memoria
    delete diclofenac;
    delete ibuprofeno;
    delete enalapril;
    delete Valentini;
    delete Marfei;
    delete pedidoMarfei;
    delete pedidoValentini;

    return 0;

}