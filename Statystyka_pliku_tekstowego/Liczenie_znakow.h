/**
* \file Liczenie_znaków.h
* \brief Plik nagłówkowy modułu \b Liczenie_znaków.
*
* Moduł \b Liczenie_znakow odpowiada za tworzenie listy znaków z podanego przez użytkownika pliku.
* \see Liczenie_znakow.cpp
*/
#ifndef LICZENIE_ZNAKOW_H
#define LICZENIE_ZNAKOW_H
#include <string>

using namespace std;

/** \brief Element listy dynamicznej.
 *
 *
 * Definicja elementu jednokierunkowej dynamicznej listy znaków.
 */
struct znaki{
    /// Napotkany znak w tekście.
    char znak;
    /// Ilość napotkanych identycznych znaków.
    int ilosc=0;
    znaki *next;
};

/** \brief Tworzenie listy znaków.
 *
 *  Funkcja tworząca listę znaków poprzez wczytywanie znaków z podanego przez użytkownika pliku.
 *  \param nazwa Nazwa pliku z którego program będzie pobierać dane.
 *  \param glowa Wskaźnik na aktualnie ostatnią komórkę listy.
 *  \param zmienna Wskaźnik na aktualną komórkę listy, sprawdza czy istnieje już komórka z aktualnie wczytanym znakiem.
 *  \param slowo Aktualnie wczytany znak z pliku.
 *  \return Wskaźnik na pierwszy element listy.
 */
znaki *liczenie_znakow(string nazwa);

#endif // LICZENIE_ZNAKOW_H
