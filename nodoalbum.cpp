#include <iostream>
#include "nodoalbum.h"

using namespace std;

void Nodoalbum::Setname(char _name){
	name = _name;
}


void Nodoalbum::Setgender(char _gender){
	gender = _gender;
}


void Nodoalbum::Setartist(char _album){
	album = _album;
}


void Nodoalbum::Setnext(*Nodoalbum _next){
	next = _next;
}

char Nodoalbum::Getname(){
	return name;
}
char Nodoalbum::Getgender(){
	return gender;
}
char Nodoalbum::Getartist(){
	return artist;
}
Nodoalbum Nodoalbum::Getnext(){
	return next;
}



