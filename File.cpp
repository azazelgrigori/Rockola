#include <iostream>
#include "File.h"
#include <cstdlib>
#include <sstream>
#include <string>

using namespace std;

Files::Files(Nodoalbum *head1)
{
    Albumes = head1;
}

void Files::SaveAlbumes()
{
    fileAlbumes.open("Albumes.txt", ios::out | ios::trunc);

    if (fileAlbumes.is_open()) {
        string exitText,auxInt;
        std::ostringstream buff;
        Nodoalbum *aux = Albumes;
        
        
        while (aux != NULL) {
        	buff<<aux->Getnumber();
            auxInt = aux->Getnumber();
			cout<<auxInt;
			system("pause"); // Entero a String C++ 11 !!!
            exitText = auxInt+','+aux->Getname()+','+aux->Getartist()+','+aux->Getgenrer();
            if (aux != NULL) {
                exitText = exitText+'\n';
            }
        }
        fileAlbumes<<exitText;
        cout<<"++++  "<<exitText<<" ++++++";
        system("pause");
        fileAlbumes.close();
    }else{
        cout<<"No se encontro el archivo"<<endl;
    }
}

void Files::ReadAlbumes(Nodoalbum *&_head)
{
    int number,cont,cont2;
    string name, artist, genre, numberstr;
    
    fileAlbumes.open("Albumes.txt", ios::in);
    if (fileAlbumes.is_open()) {
        string line;
        cont2=0;
        while (getline(fileAlbumes,line))
        {
            cont = 1;
            char buffer[50];
            strcpy(buffer,line.c_str());
            char *ptr;
            ptr = strtok(buffer,",");
                while(ptr != NULL)
                {
                    
                    switch (cont) {
                        case 2:
                            name = ptr;
                            break;
                        case 3:
                            artist = ptr;
                            break;
                        case 4:
                            genre = ptr;
                            break;
                        case 1:
                            numberstr = ptr;
                            istringstream ( numberstr ) >> number;
                            break;
                    }
                    ptr = strtok(NULL, ",");
                    cont++;
                }
            
            //Insert new nodo ------------------------------------
                Listaalbum object;
                	Nodoalbum *Nuevo = new Nodoalbum();
                	Nuevo->Setnumber(number);
                	Nuevo->Setname(name);
                	Nuevo->Setgenrer(genre);
                	Nuevo->Setartist(artist);
                	
                    object.Agregar(Nuevo);
                object.~Listaalbum();
            //End Insert New Nodo -------------------------
        }
    }else{
        
        cout<<"\nNo se encontro el archivo"<<endl;
    }
}
