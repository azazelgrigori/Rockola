#include <iostream>
#include <stdlib.h>
#include "nodoalbum.h"
#include "listaalbum.h"
#include "File.h"

using namespace std;
		

int main()
{
	Nodoalbum *Cabeza = NULL;
	Nodoalbum *aux = NULL;
	Listaalbum *Albumes = new Listaalbum();
	Albumes->Set_cabeza(Cabeza);
	Files file(Cabeza);
		
	Nodoalbum *Nuevo;
		
	int option,a,salida=1;
	string b,c,d;

	while(1){
	
		system("cls");
		cout<<"------Bienvenido elige la opcion deseada--------"<<endl;
		cout<<"---------------1-Mostrar albumes------------------"<<endl;
		cout<<"---------------2-Buscar album-------------------"<<endl;
		cout<<"---------------3-Agregar album------------------"<<endl;
		cout<<"---------------4-Editar album-------------------"<<endl;
		cout<<"---------------5-Eliminar album-----------------"<<endl;
		cout<<"---------------6-Guardar Info-------------------"<<endl;
		cout<<"---------------7-Cargar Info-------------------"<<endl;
		cout<<"--------------------8-Salir---------------------"<<endl;
		cout<<"Opcion: ";
		cin>>option;
		
		switch(option)
		{
			case 1:
				system("cls");
				cout<<"MOSTRANDO ALBUMES"<<endl<<endl;
				Albumes->Show();
				system("pause");
				break;
			case 2:
				if(Albumes->Get_cabeza() == NULL){
					cout<<"No hay albumes agreados verga";
				}else{
				
					cout<<"Ingrese el numero del album: ";
					cin>>a;
					if(Albumes->buscar(a)== NULL){
						cout<<"No se encontro el album buscado";
					}else{
						system("cls");
						cout<<"Nombre: "<<Albumes->buscar(a)->Getname()<<endl;
						cout<<"Artista: "<<Albumes->buscar(a)->Getartist()<<endl;
						cout<<"Genero: "<<Albumes->buscar(a)->Getgenrer()<<endl;	
					}	
				}
				system("pause");
				break;
			case 3:
				
				Nuevo = new Nodoalbum();
				system("cls");
				cout<<"Ingrese el numero de album: ";cin>>a;
				cin.ignore();
				cout<<"Ingrese el nombre: ";getline(cin,b);
				cout<<"Ingrese el genero: ";getline(cin,c);
				cout<<"Ingrese el artista: ";getline(cin,d);
				
				Nuevo->Setnumber(a);
				Nuevo->Setname(b);
				Nuevo->Setgenrer(c);
				Nuevo->Setartist(d);
				
				Albumes->Agregar(Nuevo);
				break;
			case 4:
				system("cls");
				cout<<"Ingrese el numero del album a editar: ";
				cin>>a;
				if(Albumes->buscar(a) == NULL){
					cout<<"No existe el album a editar"<<endl;
				}else{
					cin.ignore();
					cout<<"Ingrese el nombre: ";getline(cin,b);
					cout<<"Ingrese el genero: ";getline(cin,c);
					cout<<"Ingrese el artista: ";getline(cin,d);
					
					Albumes->buscar(a)->Setname(b);
					Albumes->buscar(a)->Setgenrer(c);
					Albumes->buscar(a)->Setartist(d);
				}
				system("pause");
				break;
			case 5:
				system("cls");
				cout<<"Eliminando"<<endl<<endl;
				cout<<"Ingrese el numero del album a eliminar: ";cin>>a;
				if(Albumes->buscar(a) == NULL){
					cout<<"No existe el album a eliminar"<<endl;
				}else{
					
					Albumes->Eliminar(a);
				}
				system("cls");
				cout<<"Eliminado con exito"<<endl;
				system("pause");
				break;
			case 6:
				file.SaveAlbumes();
				break;
			case 7:
				aux=Albumes->Get_cabeza();
				file.ReadAlbumes(aux);
				break;
			case 8:
				return 0;
				break;
			default:
				cout<<"No existe la opción"<<endl;
				system("pause");
				break;
		}
	}
	return 0;
}


