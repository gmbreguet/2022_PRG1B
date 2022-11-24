//---------------------------------------------------------
// Demo           : 2022-11-24
// Fichier        : 2022-11-24.cpp
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
int afficher(int i, int ) {
   cout << i << " ";
   return i;
}

//--------------------------------------------------
int additionner(int i, int j) {
   return i + j;
}


void parcourir(vector<int>& v, int(*fonction)(int, int) ) {
   for (Ligne::size_type i=0; i<v.size()-1; ++i)
      v[i] = fonction( v[i], v[i+1] );
}

//--------------------------------------------------
int main () {

   Ligne l1 = {1, 2, 3, 4, 5};
   cout << l1 << endl;
   parcourir(l1, additionner);
   cout << l1 << endl;
   parcourir(l1, afficher);


   cout << endl;
   return EXIT_SUCCESS;
}
