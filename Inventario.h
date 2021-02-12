#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <vector>
#include <string>
#include "Producto.h"

class Inventario {
	private:
		vector<Producto*>productos;
		vector<string>categorias;
	public:
		Inventario();
		//destructor
		~Inventario();
		Inventario(vector<Producto*>);
		void agregarProducto(int, string , string , int , float);
		void modificarProducto();
		void eliminarProducto(int);
		void busquedaNombre();
		void estadisticaGeneral();

};
#endif
