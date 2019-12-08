#include <iostream>
#include <string.h>
#include "nodoalbum.h"

Nodoalbum::Nodoalbum()
{
}

Nodoalbum::~Nodoalbum()
{	
}
//sets de nodoalbum
void Nodoalbum::Setnumber(int Number)
{
	number = Number;
}


void Nodoalbum::Setname(string _name ){
	name = _name;	
}


void Nodoalbum::Setgenrer(string _genrer){
	genrer = _genrer;
}


void Nodoalbum::Setartist(string _artist){
	artist = _artist;
}


void Nodoalbum::Setnext(Nodoalbum *_next){
	next = _next;
}

//gets nodoalbum

int Nodoalbum::Getnumber(){
	return number;
}
string Nodoalbum::Getname(){
	return name;
}
string Nodoalbum::Getgenrer(){
	return genrer;
}
string Nodoalbum::Getartist(){
	return artist;
}
Nodoalbum *Nodoalbum::Getnext(){
	return next;
}




