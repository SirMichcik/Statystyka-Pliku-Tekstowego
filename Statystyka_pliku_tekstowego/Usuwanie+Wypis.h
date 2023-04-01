/**
* \file Usuwanie+Wypis.h
* \brief Plik nagłówkowy modułu \b Usuwanie+Wypis.
*
* Moduł \b Usuwanie+Wypis odpowiada za wypisywanie oraz usuwanie odpowiednich list.
* \see Usuwanie+Wypis.cpp
*/
#ifndef USUWANIEWYPIS_H
#define USUWANIEWYPIS_H
#include "Tworzenie_listy.h"
#include "Liczenie_znakow.h"

using namespace std;

/** \brief Wypis słów.
 *
 *  Funkcja wypisująca dane z listy słów.
 *  \param glowa Wskaźnik na aktualną komórkę listy.
 */
void wypis(znaki *glowa);

/** \brief Usuwanie słów.
 *
 *  Funkcja usuwająca listę słów.
 *  \param glowa Wskaźnik na aktualną komórkę listy.
 *  \param p Wskaźnik na poprzednią komórkę listy.
 */
void usuwanie(znaki *&glowa);

/** \brief Wypis znaków.
 *
 *  Funkcja wypisująca dane z listy znaków.
 *  \param glowa Wskaźnik na aktualną komórkę listy.
 */
void wypis(element *glowa);

/** \brief Usuwanie znaków.
 *
 *  Funkcja usuwająca listę znaków.
 *  \param glowa Wskaźnik na aktualną komórkę listy.
 *  \param p Wskaźnik na poprzednią komórkę listy.
 */
void usuwanie(element *&glowa);

#endif // USUWANIEWYPIS_H
