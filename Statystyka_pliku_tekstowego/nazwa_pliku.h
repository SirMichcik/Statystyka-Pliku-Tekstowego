/**
* \file nazwa_pliku.h
* \brief Plik nagłówkowy modułu \b nazwa_pliku.
*
* Moduł \b nazwa_pliku odpowiada za wczytanie nazwy pliku od użytkownika.
* \see nazwa_pliku.cpp
*/
#ifndef NAZWA_PLIKU_H
#define NAZWA_PLIKU_H
#include <string>

using namespace std;

/** \brief Wczytywanie nazwy pliku od użytkownika.
 *
 *  Funkcja wczytująca nazwę pliku od użytkownika.
 *  \param nazwa Nazwa pliku wybranego przez użytkownika.
 *  \return Nazwa pliku.
 */
string nazwa_pliku();

#endif // NAZWA_PLIKU_H
