#include <iostream>

using namespace std;

int main() {
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
					cout<< "Mantenimiento de productos: " << endl
					    << "1. Agregar Producto: " << endl
					    << "2. Modificar Producto: " << endl
					    << "3. Eliminar Producto: " << endl
					    << "4. Regresar al menu principal: " << endl;
					cout << "Ingrese una opcion: " << endl;
					cin >> opcionSubmenu;
					switch(opcionSubmenu) {
						case 1: {
							//Agregar Producto

							break;
						}
						case 2: {
							//modificar producto

							break;
						}
						case 3: {
							//eliminar producto

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
			return 0;
		}
	}
}
