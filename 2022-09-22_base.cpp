//---------------------------------------------------------
// Demo           : 2022-09-22
// Fichier        : 2022-09-22.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe PRG1B
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

   int main = 3;

   int BLEU  = 9,
       VERT  = 0,
       ROUGE = 3;

   int monEntier = BLEU + 1.2;     // initialisation

   cout << "monEntier : " << monEntier << endl;

   monEntier = 12;            // affectation

   cout << "monEntier : " << monEntier << endl;

   return EXIT_SUCCESS;
}
