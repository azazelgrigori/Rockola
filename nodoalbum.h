#include <iostream>
#ifndef NODOALBUM_H
#define NODOALBUM_H

#include <stdlib.h>
#include <iostream>

using namespace std;


class Nodoalbum
{
	private:
		int number;
		string name;
		string genrer;
		string artist;
		Nodoalbum *next;
		
	public:
		Nodoalbum();
		~Nodoalbum();
		//sets
		void Setnumber(int);
		void Setname(string);
		void Setgenrer(string);
		void Setartist(string);
		void Setnext(Nodoalbum *);
		//gets
		int Getnumber();
		string Getname();
		string Getgenrer();
		string Getartist();
		Nodoalbum *Getnext();
};

#endif

