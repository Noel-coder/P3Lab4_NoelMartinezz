#include "Producto.h"

Producto::Producto(){

}

Producto::Producto(int id,string nombre,string categoria, int cantidadUnidades, float precio){
  this->id = id;
  this->nombre = nombre;
  this->categoria = categoria;
  this->cantidadUnidades = cantidadUnidades;
  this->precio = precio;
}
//destructor
Producto::~Producto(){
  cout << "Se destruyo el producto" << endl;
}

int Producto::getId(){
  return this->id;
}

void Producto::setId(int _id){
  this->id = _id;
}

string Producto::getNombre(){
  return this->nombre;
}

void Producto::setNombre(string _nombre){
  this->nombre = _nombre;
}

string Producto::getCategoria(){
  return this->categoria;
}

void Producto::setCategoria(string _categoria){
  this->categoria = _categoria;
}

int Producto::getCantidadUnidades(){
  return this->cantidadUnidades;
}

void Producto::setCantidadUnidades(int _cantidadUnidades){
  this->cantidadUnidades = _cantidadUnidades;
}

float Producto::getPrecio(){
  return this->precio;
}

void Producto::setPrecio(float _precio){
  this->precio = _precio;
}
