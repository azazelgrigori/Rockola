#ifndef Files_h
#define Files_h

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <string.h>

#include "nodoalbum.h"
#include "listaalbum.h"


using namespace std;

class Files {
    private:
        Nodoalbum *Albumes;
        fstream fileAlbumes;
    public:
        Files(Nodoalbum *);
        void SaveAlbumes();
        void ReadAlbumes(Nodoalbum *&);
};
#endif /* Files_hpp */
