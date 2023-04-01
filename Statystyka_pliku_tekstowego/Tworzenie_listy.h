/**
* \file Tworzenie_listy.h
* \brief Plik nagłówkowy modułu \b Tworzenie_listy.
*
* Moduł \b Tworzenie_listy odpowiada za tworzenie listy słów poprzez wczytywanie słów z podanego przez użytkownika pliku.
* \see Tworzenie_listy.cpp
*/
#ifndef TWORZENIE_LISTY_H
#define TWORZENIE_LISTY_H
#include <fstream>

using namespace std;

/** \brief Element listy dynamicznej.
 *
 *
 * Definicja elementu jednokierunkowej dynamicznej listy słów.
 */
struct element{
    /// Napotkane słowo w tekście.
    string slowo;
    /// Ilość napotkanych identycznych słów.
    int ilosc=0;
    element *next;
};

/** \brief Tworzenie listy słów.
 *
 *  Funkcja tworząca listę słów poprzez wczytywanie słów z podanego przez użytkownika pliku.
 *  \param nazwa Nazwa pliku z którego program będzie pobierać dane.
 *  \param glowa Wskaźnik na aktualnie ostatnią komórkę listy.
 *  \param zmienna Wskaźnik na aktualną komórkę listy, sprawdza czy istnieje już komórka z aktualnie wczytanym słowem.
 *  \param slowo Aktualnie wczytane słowo z pliku.
 *  \return Wskaźnik na pierwszy element listy.
 */
element *adresglowy(string nazwa);

#endif // TWORZENIE_LISTY_H
