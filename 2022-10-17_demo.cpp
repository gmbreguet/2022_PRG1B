//---------------------------------------------------------
// Demo           : 2022-10-10_demo
// Fichier        : 2022-10-10_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int saisie () {
   const string MSG_ERREUR = "/!\\ erreur de saisie ..."s;
   const int    MIN        = -5,
                MAX        =  8;
   int          saisie;    // ne peuvent pas être déclarés
   bool         erreur;    // ... dans la boucle

   do {
      // message et saisie
      cout << "saisie [" << MIN << " - " << MAX << "] : ";
      cin >> saisie;

      // saisie et vérification en même temps
      // erreur = not(cin >> saisie) or saisie < MIN or saisie > MAX;

      // vérification
      erreur = cin.fail() or saisie < MIN or saisie > MAX;
      if (erreur) {
         cout << MSG_ERREUR << endl;
         cin.clear();
      }

      // vider buffer
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

   } while(erreur);
}

int main() {

   int valeur;
   cout << "saisir une valeur [0-10]";
   cin  >> valeur;

   // si erreur
   while (valeur > 10) {
      cout << "saisir une valeur ";
      cin  >> valeur;
   }

   do {
      cout << "saisir une valeur ";
      cin  >> valeur;
   }while (valeur > 10);


   return EXIT_SUCCESS;
}
