/**
* \file Liczenie_znakow.cpp
* \brief Plik implementacyjny modułu \b Liczenie_znakow.
*
* Moduł \b Liczenie_znakow odpowiada za tworzenie listy znaków z podanego przez użytkownika pliku.
* \see Liczenie_znakow.h
*/
#include "Liczenie_znakow.h"
#include <iostream>
#include <fstream>

using namespace std;

znaki *liczenie_znakow(string nazwa){
    ifstream plik(nazwa);
    znaki *glowa=0, *zmienna;
    char znak;
    if (plik.good()){
        while (!plik.eof()){
            zmienna = glowa;
            plik >> znak;
            while(zmienna!=0){
                if (zmienna->znak==znak){
                    zmienna->ilosc++;
                    break;
                }
                if (zmienna->next==0){
                    znaki *nowy = new znaki;
                    nowy->znak = znak;
                    nowy->ilosc ++;
                    nowy->next = 0;
                    zmienna->next = nowy;
                    break;
                }
                zmienna = zmienna->next;
            }
            if (glowa==0){
                znaki *nowy = new znaki;
                nowy->znak = znak;
                nowy->ilosc ++;
                nowy->next = 0;
                glowa = nowy;
            }
        }
    }
    plik.close();
    return glowa;
}
