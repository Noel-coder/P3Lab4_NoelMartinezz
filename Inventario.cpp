#include "Inventario.h"
#include<string>
#include<iostream>

using namespace std;
Inventario::Inventario() {
}
void Inventario::agregarProducto(int id, string nombre, string categoria, int cantidadUnidades, float precio) {
	int cont=0,c=0;
	do {
		cont=0;
		for(int i=0; i < productos.size(); i++) {
			if(productos.at(i)->getId()==id) {
				cont++;
			}
		}
		if(cont !=0 ) {
			cout << "El ID del producto ya existe, porfavor ingrese uno nuevamente: " << endl;
			cin >> id;
		}
	} while(cont != 0);
	for(int i=0; i < categorias.size(); i++) {
		if(categorias[i]==categoria) {
			c++;
		}
	}
	if(c==0) {
		categorias.push_back(categoria);
	}
	productos.push_back(new Producto(id,nombre,categoria,cantidadUnidades,precio));
}


void Inventario::modificarProducto(int id, int opcion) {
	switch(opcion) {
		case 1: {
			cout << "Ingrese el id del producto a modificar: " << endl;
			cin>>id;
			string nombre="";
			cout << "Ingrese el nuevo nombre: "<<endl;
			cin >> nombre;
			for(int i=0; i < productos.size(); i++) {
				if(productos.at(i)->getId() == id) {
					productos.at(i)->setNombre(nombre);
				}
			}
			break;
		}
		case 2: {
			int cantidad;
			cout << "Ingrese la nueva cantidad del producto: "<< endl;
			cin >> cantidad;
			for(int i=0; i < productos.size(); i++) {
				if(productos.at(i)->getId() == id) {
					productos.at(i)->setCantidadUnidades(cantidad);
				}
			}
			break;
		}
		case 3: {
			float precio;
			cout << "Ingrese el nuevo precio del producto: "<< endl;
			cin >> precio;
			for(int i=0; i < productos.size(); i++) {
				if(productos.at(i)->getId() == id) {
					productos.at(i)->setPrecio(precio);
				}
			}
			break;
		}
	}
}
void Inventario::eliminarProducto(int id) {
	for(int i=0; i < productos.size(); i++) {
		if(productos.at(i)->getId()==id) {
			productos.erase(productos.begin()+1);
		}
	}
}
void Inventario::estadisticaGeneral() {
	int contUnidades=0,prodUnicos=0,totalInventario=0;
	for(int i = 0; i < productos.size(); i++) {
		Producto *product = productos[i];
		cout <<"------" << "Producto #" << i <<"------"<<endl;
		cout << "ID: "<< product->getId() << endl;
		cout << "Nombre: "<< product->getNombre() << endl;
		cout << "Categoria: "<< product->getCategoria() << endl;
		cout << "Cantidad de Unidades: " << product->getCantidadUnidades() << endl;
		cout << "Precio: " << product->getPrecio() << endl;
	}
	for(int i=0; i < productos.size(); i++){
		contUnidades+=productos.at(i)->getCantidadUnidades();
	}
	cout << "El total de unidades: "<<"["<<contUnidades<<"]"<<endl;
	cout << "Productos Unicos: "<<"["<<productos.size()<<"]"<<endl;
	int reserva=0;
	for(int i=0; i < productos.size();i++){
		reserva=0;
		reserva = productos.at(i)->getCantidadUnidades()*productos.at(i)->getPrecio();
		totalInventario+= reserva;
	}
	cout << "Precio total del Inventario: "<<"["<<totalInventario<<"]"<<endl;
}


