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



using Ligne   = vector<int>;
using Matrice = vector<Ligne>;

//--------------------------------------------------
ostream& operator<< (ostream& os, const Ligne& ligne) {
   os << "[";
   for (size_t i=0; i<ligne.size(); ++i) {
      if (i)
         os << ", ";
      os << ligne[i];
   }
   return os << "]";
}

//--------------------------------------------------
ostream& operator<< (ostream& os, const Matrice& matrice) {
   for (const Ligne& ligne : matrice)
      os << ligne << endl;
   return os;
}

//--------------------------------------------------
int main () {

   Ligne l1 = {1, 2, 3, 4, 5};
   cout << l1 << endl;
   cout << endl;

   Matrice m1(3, l1);
   cout << m1 << endl;
   cout << endl;

   Matrice m2 = {{},
                 {1, 2, 3, 4, 5, 6, 7, 8},
                 {1, 2, 3, 4}};
   cout << m2 << endl;
   cout << endl;

   cout << m2.at(1)        << endl;
   cout << m2.at(1).at(3)  << endl;

   // faux !!
// cout << m2.at(3)        << endl; // pas le ligne no 3
// cout << m2.at(2).at(4)  << endl; // pas de valeur à cette ligne

   cout << endl;
   return EXIT_SUCCESS;
}
