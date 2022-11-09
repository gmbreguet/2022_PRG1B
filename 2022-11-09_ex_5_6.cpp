//---------------------------------------------------------
// Demo           : 2022-11-09_ex_5_6
// Fichier        : 2022-11-09_ex_5_6.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//--------------------------------------------------
void afficher(const int tab[], size_t TAILLE) {
   cout << "[";
   for (size_t i=0; i<TAILLE; ++i) {
      if (i)
         cout << ", ";
      cout << tab[i];
   }
   cout << "]";
}

//--------------------------------------------------
void echanger(int& gauche, int& droite){
   int tmp = gauche;
   gauche  = droite;
   droite  = tmp;
}

//--------------------------------------------------
void permuter(int tab[], size_t TAILLE) {
   echanger(tab[0], tab[TAILLE-1]);
}

//--------------------------------------------------
int min(const int tab[], size_t TAILLE) {
   int mini = tab[0];
   for (size_t i=1; i<TAILLE; ++i) {
      if (tab[i] < mini)
         mini = tab[i];
   }
   return mini;
}

//--------------------------------------------------
int& min(int tab[], size_t TAILLE) {
   size_t iMin = 0;
   for (size_t i=1; i<TAILLE; ++i) {
      if (tab[i] < tab[iMin])
         iMin = i;
   }
   return tab[iMin];
}

//--------------------------------------------------
int main () {

   int tab[] = {0, 1, 2, 3, 4, 5, 6, -7, 8, 9};
   const size_t TAILLE = sizeof(tab) / sizeof(tab[0]);

   cout << endl;
   afficher(tab, TAILLE);
   permuter(tab, TAILLE);
   cout << endl;
   afficher(tab, TAILLE);

   cout << endl;
   cout << "minimum : " << min(tab, TAILLE);
   cout << endl;
   min(tab, TAILLE) = 12;
   afficher(tab, TAILLE);

//   cout << endl;
//   int tabVide[0] = {};
//   cout << "minimum : " << min(tabVide, 0);

   cout << endl;
   return EXIT_SUCCESS;
}
