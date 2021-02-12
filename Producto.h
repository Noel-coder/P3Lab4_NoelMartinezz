#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<string>
#include<iostream>
using namespace std;

class Producto {
	private:
		int id;
		string nombre;
		string categoria;
		int cantidadUnidades;
		float precio;

	public:
		Producto();
		Producto(int,string,string,int,float);
		~Producto();
		int getId();
		string getNombre();
		string getCategoria();
		int getCantidadUnidades();
		float getPrecio();
		void setId(int);
		void setNombre(string);
		void setCategoria(string);
		void setCantidadUnidades(int);
		void setPrecio(float);
};
#endif
