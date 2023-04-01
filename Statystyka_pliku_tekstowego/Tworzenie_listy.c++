/**
* \file Tworzenie_listy.cpp
* \brief Plik nagłówkowy modułu \b Tworzenie_listy.
*
* Moduł \b Tworzenie_listy odpowiada za tworzenie listy słów poprzez wczytywanie słów z podanego przez użytkownika pliku.
* \see Tworzenie_listy.h
*/
#include "Tworzenie_listy.h"
#include <iostream>
#include <fstream>

using namespace std;

element *adresglowy(string nazwa){
    ifstream plik(nazwa);
    element *glowa=0, *zmienna;
    string slowo;
    if (plik.good()){
        while (!plik.eof()){
            zmienna = glowa;
            plik >> slowo;
            if (slowo[slowo.length()-1]>=33&&slowo[slowo.length()-1]<=64){
                slowo.pop_back();
            }
            for (int i=0; i<slowo.length(); i++){
                slowo[i] = toupper(slowo[i]);
            }
            while(zmienna!=0){
                if (zmienna->slowo==slowo){
                    zmienna->ilosc++;
                    break;
                }
                if (zmienna->next==0){
                    element *nowy = new element;
                    nowy->slowo = slowo;
                    nowy->ilosc ++;
                    nowy->next = 0;
                    zmienna->next = nowy;
                    break;
                }
                zmienna = zmienna->next;
            }
            if (glowa==0){
                element *nowy = new element;
                nowy->slowo = slowo;
                nowy->ilosc ++;
                nowy->next = 0;
                glowa = nowy;
            }
        }
    }
    else {
        cout << "Nie ma takiego pliku." << endl;
    }
    plik.close();
    return glowa;
}

