#include "pedido.hpp"
using namespace std;

namespace parcial
{
    Pedido::Pedido(string codigo, Cliente* cliente){
        this->codigo = codigo;
        this->cliente = cliente;
    }
    void Pedido::compra(Articulo* articulo){
        this->listart.push_back(articulo); //push back o front?
    }
    void Pedido::mostrar(){
        cout << "------------------------------------" <<endl;
        cout << "Pedido de: " << this->cliente->getNombre() <<endl;
        for(Articulo* articulo:listart){
            cout << "   " << articulo->getNombre() <<endl;
        }
    }
}