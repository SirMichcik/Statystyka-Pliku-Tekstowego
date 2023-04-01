/**
* \file Sortowanie_wyrazow.cpp
* \brief Plik nagłówkowy modułu \b Sortowanie_wyrazow.
*
* Moduł \b Sortowanie_wyrazow odpowiada za sortowanie słów znajdujących się na liście słów w kolejności od najczęściej do najrzadziej występującego słowa.
* \see Sortowanie_wyrazow.h
*/
#include "Sortowanie_wyrazow.h"
#include "Tworzenie_listy.h"

using namespace std;

void sortowanie_wyrazow(element *glowa){
    while (glowa!=0){
        element *zmienna = glowa, *adres = glowa;
        int max=0, wartosc=0;
        string slowo1, slowo2;
        slowo1 = glowa->slowo;
        wartosc = glowa->ilosc;
        while (zmienna!=0){
            if(zmienna->ilosc > max){
                slowo2 = zmienna->slowo;
                max = zmienna->ilosc;
                adres = zmienna;
            }
            zmienna = zmienna->next;
        }
        glowa->slowo = slowo2;
        adres->slowo = slowo1;
        glowa->ilosc = max;
        adres->ilosc = wartosc;
        glowa = glowa->next;
    }
}

