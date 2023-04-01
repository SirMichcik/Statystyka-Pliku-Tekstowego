/**
* \file nazwa_pliku.cpp
* \brief Plik nagłówkowy modułu \b nazwa_pliku.
*
* Moduł \b nazwa_pliku odpowiada za wczytanie nazwy pliku od użytkownika.
* \see nazwa_pliku.h
*/
#include "nazwa_pliku.h"
#include <iostream>
#include <string>
using namespace std;

string nazwa_pliku(){
    string nazwa;
    cout << "Podaj nazwe pliku" << endl;
    cin >> nazwa;
    cout << endl << endl;
    return nazwa;
}
