//---------------------------------------------------------
// Demo           : 2022-10-06_demo
// Fichier        : 2022-10-06_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int GLOBAL_MOCHE = 23;

int main() {

   int entier = 7;
   cout << "entier : " << entier    << endl;
   cout << "adresse: " << (&entier) << endl;
//   cout << "reel   : " << reel   << endl;

   {
//      double reel = 3.14;
      entier = entier + 1;
      int    entier = 12;

      cout << "entier : " << entier << endl;
      cout << "adresse: " << (&entier) << endl;
      cout << "entier : " << entier << endl;
//      cout << "reel   : " << reel   << endl;

      {
         int block_2_1 = 12;
         cout << "entier : " << entier << endl;
//         cout << "reel   : " << reel   << endl;
      }

      {
         int block_2_2 = 12;
         cout << "entier : " << entier << endl;
//         cout << "reel   : " << reel   << endl;
      }
   }

   cout << "entier : " << entier << endl;
//   cout << "reel   : " << reel   << endl;


   int valeur = 9;
   if (valeur > 10);
      cout << "oui";
      cout << " c'est vrai";
   cout << endl;

   int a =  5;
   int b =  3;
   int c =  7;
   int minimum1 = a < b ? (a < c ? a : c) : (b < c ? b : c);
   int minimum2 = a < b ?        // question
                  a < c ? a : c: // vrai
                  b < c ? b : c; // faux

   cout << minimum2 << endl;


   return EXIT_SUCCESS;
}
