/**
* \file Usuwanie+Wypis.cpp
* \brief Plik nagłówkowy modułu \b Usuwanie+Wypis.
*
* Moduł \b Usuwanie+Wypis odpowiada za wypisywanie oraz usuwanie odpowiednich list.
* \see Usuwanie+Wypis.h
*/
#include <iostream>
#include <iomanip>
#include "Usuwanie+Wypis.h"

using namespace std;

void wypis(element *glowa){
    while(glowa!=0){
        cout << setw(16) <<  glowa->slowo << '\t' << glowa->ilosc << endl;
        glowa = glowa->next;
    }
    cout<<endl<<endl;
}

void usuwanie(element *&glowa){
    while(glowa!=0){
        element *p = glowa;
        glowa = glowa->next;
        delete p;
    }
}

void wypis(znaki *glowa){
    while(glowa!=0){
        cout << setw(16) << glowa->znak << '\t' << glowa->ilosc << endl;
        glowa = glowa->next;
    }
    cout<<endl<<endl;
}

void usuwanie(znaki *&glowa){
    while(glowa!=0){
        znaki *p = glowa;
        glowa = glowa->next;
        delete p;
    }
}
