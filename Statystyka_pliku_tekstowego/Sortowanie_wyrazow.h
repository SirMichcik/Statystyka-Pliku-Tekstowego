/**
* \file Sortowanie_wyrazow.h
* \brief Plik nagłówkowy modułu \b Sortowanie_wyrazow.
*
* Moduł \b Sortowanie_wyrazow odpowiada za sortowanie słów znajdujących się na liście słów w kolejności od najczęściej do najrzadziej występującego słowa.
* \see Sortowanie_wyrazow.cpp
*/
#ifndef SORTOWANIE_WYRAZOW_H
#define SORTOWANIE_WYRAZOW_H
#include "Tworzenie_listy.h"

/** \brief Sortowanie listy słów.
 *
 *  Funkcja sortuje słowa znajdujące się na liście słów w kolejności od najczęściej do najrzadziej występującego słowa.
 *  \param glowa Wskaźnik na aktualnie zamienianą komórkę listy.
 *  \param zmienna Wskaźnik na aktualnie sprawdzaną komórkę listy, sprawdza czy komórka posiada wyższą wartość ilości niż komórka sortowana.
 *  \param adres Wskaźnik na aktualnie sortowaną komórkę listy.
 *  \param max Aktualnie największa wartość ilości ze wszystkich komórek.
 *  \param wartosc Wartość ilości aktualnie zmienianej komórki listy.
 *  \param slowo1 Aktualnie zamieniane słowo.
 *  \param slowo2 Aktualnie sortowane słowo.
 */
void sortowanie_wyrazow(element *glowa);

#endif // SORTOWANIE_WYRAZOW_H
