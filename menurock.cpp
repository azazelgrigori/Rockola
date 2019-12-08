#include <iostream>
#include <stdlib.h>
#include "nodoalbum.h"
#include "listaalbum.h"

using namespace std;


int main()
{
	
	
		int option,a;
		string b,c,d;
		Nodoalbum *Cabeza=NULL;
		Listaalbum *Albumes = new Listaalbum();
		Albumes->Set_cabeza(Cabeza);
		
		Nodoalbum *Nuevo;
	
	while(1)
	{
		system("cls");
		cout<<"------Bienvenido elgie la opcion deseada--------"<<endl;
		cout<<"---------------1-Mostrar albumes------------------"<<endl;
		cout<<"---------------2-Buscar album-------------------"<<endl;
		cout<<"---------------3-Agregar album------------------"<<endl;
		cout<<"---------------4-Editar album-------------------"<<endl;
		cout<<"---------------5-Eliminar album-----------------"<<endl;
		cout<<"--------------------6-Salir---------------------"<<endl;
		cout<<"Opcion: ";
		cin>>option;
		
		switch(option)
		{
			case 1:
				system("cls");
				cout<<"MOSTRANDO ALBUMES";
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
				break;
			case 6:
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


