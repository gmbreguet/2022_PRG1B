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
#include <string>
#include <cctype>

using namespace std;

int main () {

   // programme qui transforme en MAJUSCULE une chaine
   string chaine = "Bonjour a tous";


   for (size_t i=0; i<chaine.length(); ++i) {
      chaine[i] = (char)toupper(chaine[i]);
   }
   cout << chaine << endl;
   chaine = "Bonjour a tous";

   // /!\ & pour etre en lien avec le car de la chaine
   for (char& c : chaine) {
      c = (char)toupper(c);
      cout << c;
   }
   cout << endl;
   cout << chaine << endl;

   return EXIT_SUCCESS;
}
