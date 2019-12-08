#ifndef LISTA_H
#define LISTA_H

#include "nodoalbum.h"

using namespace std;


class Listaalbum
{
	private:
		Nodoalbum *Cabeza;
		
	public:
		Listaalbum();
		~Listaalbum();
		void Set_cabeza(Nodoalbum *);
		Nodoalbum* Get_cabeza();
		
		Nodoalbum* Get_ultimo();
		void Agregar(Nodoalbum *);
		void Modificar(Nodoalbum *);
		void Show();
		Nodoalbum* buscar(int);
		void Eliminar(int);
		
		
};
#endif

