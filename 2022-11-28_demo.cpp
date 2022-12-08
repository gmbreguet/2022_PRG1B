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
#include <algorithm>

using namespace std;



//--------------------------------------------------
ostream& operator<< (ostream& os, const vector<int>& ligne) {
   os << "[";
   for (size_t i=0; i<ligne.size(); ++i) {
      if (i)
         os << ", ";
      os << ligne[i];
   }
   return os << "]";
}


//--------------------------------------------------
int main () {

   const vector<int> v = {1, 2, 3, 4, 5};
   vector<int> w(v.size());

   cout << v << endl;
   remove_copy(v.begin(), v.end(), v.rbegin(), 2);
//   cout << v << endl;

   remove_copy(v.begin(), v.end(), w.rbegin(), 2);
   cout << v << endl;
   cout << w << endl;

   cout << endl;
   return EXIT_SUCCESS;
}
