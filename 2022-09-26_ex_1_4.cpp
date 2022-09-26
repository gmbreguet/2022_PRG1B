//---------------------------------------------------------
// Demo           : 2022-09-26_ex_1_4
// Fichier        : 2022-09-26_ex_1_4.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe PRG1B (ex 1.4)
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>        // entrées-sorties
#include <cstdlib>         // EXIT_SUCCESS
#include <string>          // prenom etc ...

using namespace std;

int main () {

   // déclarations
   const int      ANNE_ACTUELLE = 2022;
         string   prenom;
         int      age;
         int      anneeNaissance;

   // programme principal
   cout << "votre prenom : ";
   getline (cin, prenom);

   cout << "votre age    : ";
   cin  >> age;

   // calcul de l'année de naissance
   anneeNaissance = ANNE_ACTUELLE - age;

   // résultats
   cout << endl;
   cout << "prenom       : " << prenom           << endl;
   cout << "age          : " << age              << endl;
   cout << "naissance    : " << anneeNaissance   << endl;

   return EXIT_SUCCESS;
}
