//---------------------------------------------------------
// Demo           : 2022-09-28_demo
// Fichier        : 2022-09-28_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

   cout << setprecision(20);  // nbre chiffres après la virgule

   int i = 1;

   cout << ++i << i << endl;
   // i = 1 + 1
   // cout << i

   cout << i++ << i << endl;
   // cout << i
   // i = i + 1

   // int copy = i
   // i = i + 1
   // cout << copy


// for (int i=0; i<10; i++)   /!\ LENT
   for (int i=0; i<10; ++i)
      cout << i;

   return EXIT_SUCCESS;
}
