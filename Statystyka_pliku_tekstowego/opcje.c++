/**
* \file opcje.cpp
* \brief Plik nagłówkowy modułu \b opcje.
*
* Moduł \b opcje odpowiada za wyświetlenie plików tekstowych znajdujących się w folderze bieżącym programu.
* \see opcje.h
*/
#include <iostream>
#include <dirent.h>
#include "opcje.h"

using namespace std;

void opcje(int argc, const char**argv){
    struct dirent *entry = nullptr;
    DIR *dp = nullptr;
    string nazwa;
    dp = opendir(argc > 1 ? argv[1] : "C:Users\micha\Desktop\Twórczość\Szkoła\Automatyka, Robotyka i Informatyka Przemysłowa\ZAP\Statystyka pliku tekstowego");
    if (dp != nullptr){
        while ((entry = readdir(dp))){
            nazwa = entry->d_name;
            if (nazwa[nazwa.length()-1]=='t'&&nazwa[nazwa.length()-2]=='x'&&nazwa[nazwa.length()-3]=='t'&&nazwa[nazwa.length()-4]=='.'){
               cout << nazwa << '\t';
            }
        }
    }
    closedir(dp);
    cout <<endl<<endl<<endl;
}
