#include "cliente.hpp"
using namespace std;

namespace parcial
{
    Cliente::Cliente(string codigo, string nombre, string domicilio){
        this->codigo = codigo;
        this->nombre = nombre;
        this->domicilio = domicilio;
    }
    string Cliente::getCodigo(){
        return this->codigo;
    }
    string Cliente::getNombre(){
        return this->nombre;
    }
    string Cliente::getDomicilio(){
        return this->domicilio;
    }
}