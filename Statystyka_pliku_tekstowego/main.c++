/**
* \file main.cpp
* \brief Plik źródłowy programu.
* \mainpage
* \par Statystyka pliku tekstowego
* Program zajmuje się liczeniem słów i znaków pliku tekstowego podanego przez użytkownika.
* \author Michał Załęgowski
* \date 2022.05.31
* \version 1.0
* \par Kontakt:
* email: 01171790@pw.edu.pl
*/
/** \code
 *
#include <iostream>
#include <fstream>
#include <dirent.h>
#include "Tworzenie_listy.h"
#include "opcje.h"
#include "Usuwanie+Wypis.h"
#include "nazwa_pliku.h"
#include "Liczenie_znakow.h"
#include "Sortowanie_znakow.h"
#include "Sortowanie_wyrazow.h"

using namespace std;

int main(int argc, const char**argv)
{
    cout << "Dostepne pliki tekstowe:" <<endl<<endl;
    opcje(argc, argv);
    string nazwa;
    nazwa = nazwa_pliku();
    element *glowa_slow = adresglowy(nazwa);
    znaki *glowa_znakow = liczenie_znakow(nazwa);
    sortowanie_znakow(glowa_znakow);
    sortowanie_wyrazow(glowa_slow);
    wypis (glowa_slow);
    wypis (glowa_znakow);
    usuwanie (glowa_slow);
    usuwanie (glowa_znakow);
    return 0;
}
 *  \endcode
 */

#include <iostream>
#include <fstream>
#include <dirent.h>
#include "Tworzenie_listy.h"
#include "opcje.h"
#include "Usuwanie+Wypis.h"
#include "nazwa_pliku.h"
#include "Liczenie_znakow.h"
#include "Sortowanie_znakow.h"
#include "Sortowanie_wyrazow.h"

using namespace std;

int main(int argc, const char**argv)
{
    cout << "Dostepne pliki tekstowe:" <<endl<<endl;
    opcje(argc, argv);
    string nazwa;
    nazwa = nazwa_pliku();
    element *glowa_slow = adresglowy(nazwa);
    znaki *glowa_znakow = liczenie_znakow(nazwa);
    sortowanie_znakow(glowa_znakow);
    sortowanie_wyrazow(glowa_slow);
    wypis (glowa_slow);
    wypis (glowa_znakow);
    usuwanie (glowa_slow);
    usuwanie (glowa_znakow);
    return 0;
}
