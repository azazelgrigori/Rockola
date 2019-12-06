#include <iostream>
#include <stdlib.h>

using namespace std;


class Nodoalbum
{
	private:
		char name[20];
		char gender[20];
		char artist[20];
		Nodoalbum *next;
		
	public:
		void Setname(char);
		void Setgender(char);
		void Setartist(char);
		void Setnext(Nodoalbum *);
		
		char Getname();
		char Getgender();
		char Getartist();
		Nodoalbum Getnext();
};


