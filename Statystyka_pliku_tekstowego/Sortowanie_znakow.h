/**
* \file Sortowanie_znakow.h
* \brief Plik nagłówkowy modułu \b Sortowanie_znakow.
*
* Moduł \b Sortowanie_znakow odpowiada za sortowanie znaków znajdujących się na liście znaków w kolejności od najczęściej do najrzadziej występującego znaku.
* \see Sortowanie_znakow.cpp
*/
#ifndef SORTOWANIE_ZNAKOW_H
#define SORTOWANIE_ZNAKOW_H
#include "Liczenie_znakow.h"

/** \brief Sortowanie listy znaków.
 *
 *  Funkcja sortuje znaki znajdujące się na liście znaków w kolejności od najczęściej do najrzadziej występującego znaku.
 *  \param glowa Wskaźnik na aktualnie zamienianą komórkę listy.
 *  \param zmienna Wskaźnik na aktualnie sprawdzaną komórkę listy, sprawdza czy komórka posiada wyższą wartość ilości niż komórka sortowana.
 *  \param adres Wskaźnik na aktualnie sortowaną komórkę listy.
 *  \param max Aktualnie największa wartość ilości ze wszystkich komórek.
 *  \param wartosc Wartość ilości aktualnie zmienianej komórki listy.
 *  \param znak1 Aktualnie zamieniany znak.
 *  \param znak2 Aktualnie sortowany znak.
 */
void sortowanie_znakow(znaki *glowa);

#endif // SORTOWANIE_ZNAKOW_H
