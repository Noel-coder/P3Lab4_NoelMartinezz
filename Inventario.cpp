#include "Inventario.h"
#include<string>
#include<iostream>

using namespace std;
Inventario::Inventario() {
}
void Inventario::agregarProducto(int id, string nombre, string categoria, int cantidadUnidades, float precio) {
	productos.push_back(new Producto(id,nombre,categoria,cantidadUnidades,precio));
}

void Inventario::modificarProducto(){
	
}
