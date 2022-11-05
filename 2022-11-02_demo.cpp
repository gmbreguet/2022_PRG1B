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

int add(int gauche, int droite) {
   cout << "fonction no 1" << endl;
   return gauche + droite;
}

int add(int gauche, int droite, bool oui) {
   cout << "fonction no 2" << endl;
   return gauche + droite;
}

double add(double gauche, double droite) {
   cout << "fonction no 3" << endl;
   return gauche + droite;
}

int main () {

   cout << add(1, 2)       << endl;
   cout << add(1, 2, true) << endl;
   cout << add(1.2, 2.3)   << endl;

   cout << add(1, 2.0)     << endl;

   return EXIT_SUCCESS;
}
