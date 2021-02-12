#include <iostream>
#include<string>
#include<iostream>
#include "Inventario.h"
#include "Producto.h"
using namespace std;

int main() {
	Inventario* inventario = new Inventario();
	vector<string>categorias;
	vector<Producto*>productos;
	int opcion=1;
	while(opcion != 4) {
		cout << "Menu" << endl
		     << "1. Mantenimiento de productos: " << endl
		     << "2. Estadisticas Generales: " << endl
		     << "3. Busqueda por nombre: "<< endl
		     << "4. Salir "<<endl;
		cout << "Ingrese una opcion: " << endl;
		cin>>opcion;
		switch(opcion) {
			case 1: {
				int opcionSubmenu=1;
				while(opcionSubmenu!=4) {
					cout<< "[Mantenimiento de productos: ]" << endl
					    << "1. Agregar Producto: " << endl
					    << "2. Modificar Producto: " << endl
					    << "3. Eliminar Producto: " << endl
					    << "4. Regresar al menu principal: " << endl;
					cout << "Ingrese una opcion: " << endl;
					cin >> opcionSubmenu;
					switch(opcionSubmenu) {
						case 1: {
							//Agregar Producto
							int id,cantidadUnidades,c=0,cont=0;
							string nombre,categoria;
							float precio;
							cout << "Ingrese el Id: "<< endl;
							cin >> id;
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
							cout << "Ingrese el Nombre: " << endl;
							cin >> nombre;
							cout << "Ingrese la Categoria: " << endl;
							cin >> categoria;
							for(int i=0; i < categorias.size(); i++) {
								if(categoria==categoria) {
									c++;
								}
							}
							if(c==0) {
								categorias.push_back(categoria);
							}
							cout << "Ingrese la Cantidad de unidades: "<< endl;
							cin >> cantidadUnidades;
							while(cantidadUnidades < 0) {
								cout << "Las unidades no pueden ser negativas" << endl;
								cout << "Ingrese la cantidad de unidades: " << endl;
								cin >> cantidadUnidades;
							}
							cout << "Ingrese el precio del producto: " << endl;
							cin >> precio;
							while(precio < 0) {
								cout << "El precio no puede ser negativo" << endl;
								cout << "Ingrese el precio del producto: " << endl;
								cin >> precio;
							}
							cout << "Producto Ingresado con exito!" <<endl;
							break;
						}
						case 2: {
							//modificar producto
							int modificar=0;
							int id;
							while(modificar!=4) {
								cout << "1. Modificar el nombre: "<<endl
								     << "2. Modificar cantidad de unidades: "<<endl
								     << "3. Modificar el precio: "<< endl;
								cout << "Ingrese una opcion: " << endl;
								cin >> modificar;
								switch(modificar) {
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
								break;
							}
						}
						case 3: {
							//eliminar producto
							int id;
							cout<< "Ingrese el Id del producto a eliminar: " << endl;
							for(int i=0; i < productos.size();i++){
								if(productos.at(i)->getId()==id){
									productos.erase(productos.begin()+1);
								}
							}
							break;
						}
					}
				}

				break;
			}
			case 2: {

				break;
			}
			case 3: {

				break;
			}
			case 4: {
				cout << "Gracias por usar el programa :)" << endl;
				break;
			}
		}
	}
	return 0;
	delete inventario;
}
