//---------------------------------------------------------
// Demo           : 2022-11-17
// Fichier        : 2022-11-17.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;



//--------------------------------------------------
int main () {

   int tab[] = {0, 1, 2, 3, 4, 5, 6, -7, 8, 9};
   const size_t TAILLE = sizeof(tab) / sizeof(tab[0]);

   const vector<int> VECT = {2, 3, 5, 7, 11};
         vector<int> vect = {2, 3, 5, 7, 11};


   vector<int>::iterator       it1 = vect.begin();    // RW
   vector<int>::const_iterator it2 = VECT.begin();   // RO

//   ++it1;
//   ++it2;
//   *it2 = 12;

//   const auto it3 = vect.begin();
//   cout << *it3 << endl;
//   *it3 = 12;
//   ++it3;


   // pas beau ;)
   const int CSTE = 12;
   int* ptr = (int*)&CSTE;
   *ptr = 21;
   cout << *ptr << endl;

   cout << endl;
   return EXIT_SUCCESS;
}



















