//---------------------------------------------------------
// Demo           : 2022-11-02_demo
// Fichier        : 2022-11-02_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int f() {
   cout << "ici";
   return 2;
}

int main () {

   f();
   cout << endl;

   cout << f;

   cout << endl;

   return EXIT_SUCCESS;
}
