#include "articulo.hpp"
using namespace std;

namespace parcial
{
    Articulo::Articulo(string codigo, string nombre, double precio){
        this->codigo = codigo;
        this->nombre = nombre;
        this->precio = precio;
    }
    string Articulo::getCodigo(){
        return this->codigo;
    }
    string Articulo::getNombre(){
        return this->nombre;
    }
    double Articulo::getPrecio(){
        return this->precio;
    }
}