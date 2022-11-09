//---------------------------------------------------------
// Demo           : 2022-11-09_demo
// Fichier        : 2022-11-09_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//void afficher(int tab[]) {
//void afficher(int* tab) {
void afficher(const int tab[], size_t TAILLE) {  // /!\ TAILLE indispensable
//   const size_t TAILLE = sizeof(tab) / sizeof(tab[0]);
//   cout << "afficher::TAILLE : " << TAILLE << endl;
   for (size_t i=0; i<TAILLE; ++i)
      cout << tab[i] << " ";

   // NON !! car tab n'est qu'un pointeur
//   for (int i : tab) {
//      cout << i << " ";
//   }
}

int main () {

   {
//      size_t taille;
//   //   cout << "taille : ";
//   //   cin  >> taille;
//      int tab[10] = {0, 1, 2, 3, 3, 4};
//
//      // affecter des 0 dans le tableau
//      for (int i=0; i<10; ++i)
//         tab[i] = i;
//
//      // lister les valeurs du tableau
//      for (int i=0; i<10; ++i)
//         cout << tab[i] << " ";
//
//      // pas de gestion des dépassements
//   //   cout << tab[12000] << endl;
//   //   tab[12000] = 0;
//
//      // en lecture
//      cout << tab[0] << endl;
//
//      // en ecriture
//      tab[0] = 0;
//
//      // en lecture
//      cout << tab[0] << endl;
//
//      double reel;
//      cout << "adresse reel   : " << &reel            << endl;
//      cout << "taille de reel : " << sizeof(double)   << endl;
//      cout << "taille de reel : " << sizeof(reel)     << endl;
//
//      cout << "adresse tab    : " <<  tab             << endl;
//      cout << "adresse &tab   : " << &tab             << endl;
//      cout << "taille de int  : " << sizeof(int)      << endl;
//      cout << "taille de tab  : " << sizeof(tab)      << endl;
//      cout << "adresse &tab[0]: " << &tab[0]          << endl;
//      cout << "adresse &tab[1]: " << &tab[1]          << endl;
   }

   {
      const int TAB[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
            int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

      const size_t TAILLE = sizeof(tab) / sizeof(tab[0]);
      cout << TAILLE << endl;

      afficher(tab, TAILLE);
      afficher(TAB, TAILLE);


      cout << endl;

      // ok car accès à la définition du tableau
      for (int i : tab) {
         cout << i << " ";
      }
   }

   cout << endl;
   return EXIT_SUCCESS;
}
