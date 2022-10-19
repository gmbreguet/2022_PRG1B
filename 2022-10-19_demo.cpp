//---------------------------------------------------------
// Demo           : 2022-10-19_demo
// Fichier        : 2022-10-19_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main () {

   const string MOIS[] = {"JANVIER", "FEVRIER"};

   int i = 3;

   switch (i) {
      case 1 : cout << 1 << endl;
      default: cout << "def" << endl;
      case 2 : cout << 2 << endl;
   }

   enum class Mois {JANVIER = 1, FEVRIER, MARS, AVRIL, MAI, JUIN,
                   JUILLET, AOUT = 10, SEPTEMBRE, OCTOBRE, NOVEMBRE, DECEMBRE};


// cout <<      Mois::JANVIER << endl; // compile PAS !
   cout << (int)Mois::JANVIER << endl;
   cout << MOIS[(int)Mois::JANVIER-1] << endl;

   return EXIT_SUCCESS;
}
