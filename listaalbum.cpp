#include "listaalbum.h"

Listaalbum::Listaalbum()
{
	Cabeza=NULL;
}

void Listaalbum::Set_cabeza(Nodoalbum *C)
{
	Cabeza=C;	
}

Nodoalbum *Listaalbum::Get_cabeza()
{
	return Cabeza;
}

Nodoalbum *Listaalbum::Get_ultimo()
{
	Nodoalbum *Ultimo=Get_cabeza();
	while(Ultimo->Getnext() != NULL){
		Ultimo = Ultimo->Getnext();
	}
	return Ultimo;
}

void Listaalbum::Agregar(Nodoalbum *Nuevo)
{
	if(Get_cabeza()==NULL)
		Set_cabeza(nuevo);
	else
		Get_ultimo()->Setnext(Nuevo);
}

Nodoalbum* Listaalbum::Buscar(int Numero)
{
	Nodo *Busqueda=Get_cabeza();
	while(Busqueda!=NULL)and(Busqueda->Get_numero()!=Numero))
		Busqueda=Busqueda->Get_enlace();
	return Busqueda;
}

void Listaalbum::Eliminar(int Numero)
{
	Nodo *Busqueda=Get_cabeza();
	Nodo *Anterior=NULL;
	if(Busqueda->Get_numero()==Numero)
		Set_cabeza(Get_cabeza()->Get_enlace());
	else{
		while(Busqueda!=NULL)and(Busqueda->Get_numero()!=Numero){
			Anterior=Busqueda;
			Busqueda=Busqueda->Get_enlace();
		}
		if(Busqueda!=NULL){
			Anterior->Set_enlace(Busqueda->Get_enlace());
		}
	}
	delete Busqueda;
}

Listaalbum::~Listaalbum()
{
}

