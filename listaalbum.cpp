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
	if(Get_cabeza() == NULL)
		Set_cabeza(Nuevo);
	else
		Get_ultimo()->Setnext(Nuevo);
}

Nodoalbum *Listaalbum::buscar(int Numero)
{
	Nodoalbum *Busqueda = Get_cabeza();
	while((Busqueda!=NULL)and(Busqueda->Getnumber() != Numero))
		Busqueda = Busqueda->Getnext();
	return Busqueda;
}

void Listaalbum::Eliminar(int Numero)
{
	Nodoalbum *Busqueda = Get_cabeza();
	Nodoalbum *Anterior = NULL;
	if(Busqueda->Getnumber() == Numero){
		Set_cabeza(Get_cabeza()->Getnext());
	}
	else{
		while((Busqueda != NULL) and (Busqueda->Getnumber() != Numero)){
			Anterior=Busqueda;
			Busqueda=Busqueda->Getnext();
		}
		if(Busqueda!=NULL){
			Anterior->Setnext(Busqueda->Getnext());
		}
	}
	delete Busqueda;
}

Listaalbum::~Listaalbum()
{
}

void Listaalbum::Show(){

	Nodoalbum *Showing = Get_cabeza();
	while(Showing != NULL){
		cout<<"Numero: "<<Showing->Getnumber()<<endl;
		cout<<"Nombre: "<<Showing->Getname()<<endl;
		cout<<"Artista: "<<Showing->Getartist()<<endl;
		cout<<"Genero: "<<Showing->Getgenrer()<<endl;
		cout<<"******************************************"<<endl;
		
		Showing = Showing->Getnext();
	}

}

