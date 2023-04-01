/**
* \file Sortowanie_znakow.cpp
* \brief Plik nagłówkowy modułu \b Sortowanie_znakow.
*
* Moduł \b Sortowanie_znakow odpowiada za sortowanie znaków znajdujących się na liście znaków w kolejności od najczęściej do najrzadziej występującego znaku.
* \see Sortowanie_znakow.h
*/
#include "Sortowanie_znakow.h"
#include "Liczenie_znakow.h"

using namespace std;

void sortowanie_znakow(znaki *glowa){
    while (glowa!=0){
        znaki *zmienna = glowa, *adres = glowa;
        int max=0, wartosc=0;
        char znak1, znak2;
        znak1 = glowa->znak;
        wartosc = glowa->ilosc;
        while (zmienna!=0){
            if(zmienna->ilosc > max){
                znak2 = zmienna->znak;
                max = zmienna->ilosc;
                adres = zmienna;
            }
            zmienna = zmienna->next;
        }
        glowa->znak = znak2;
        adres->znak = znak1;
        glowa->ilosc = max;
        adres->ilosc = wartosc;
        glowa = glowa->next;
    }
}
