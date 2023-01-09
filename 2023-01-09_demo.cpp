//---------------------------------------------------------
// Demo           : 2023-01-09
// Fichier        : 2023-01-09.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;

//--------------------------------------------------
template<typename T>
ostream& operator<< (ostream& os, const vector<T>& ligne) {
   os << "[";
   for (size_t i=0; i<ligne.size(); ++i) {
      if (i)
         os << ", ";
      os << ligne[i];
   }
   return os << "]";
}

//--------------------------------------------------
template<typename T, int Taille>
void afficher (const array<T, Taille>& ligne) {
   cout << "[";
   for (size_t i=0; i<ligne.size(); ++i) {
      if (i)
         cout << ", ";
      cout << ligne[i];
   }
}

//--------------------------------------------------
int fct1(int i) {
   return i+1;
}

//--------------------------------------------------
int fct2(int i) {
   return i+2;
}

//--------------------------------------------------
template<typename T, typename Fct>
void parcourir(vector<T>& ligne, Fct fct) {
   for (T& i : ligne)
      i = fct(i);
}

//--------------------------------------------------
int main () {

   const vector<int> vi = {1, 2, 3, 4, 5};
   cout << vi << endl;

   const vector<double> vd = {1, 2, 3, 4, 5};
   cout << vd << endl;

   const array<char, 10> aMin = {'a', 'b', 'c', 'd'};
   afficher<char, 10>(aMin);
   cout << endl;

   const array<char, 5> aMaj = {'A', 'B', 'C', 'D'};
   afficher<char, 5>(aMaj);
   cout << endl;


   cout << "----------" << endl;
   vector<int> v = {1, 2, 3, 4, 5};
   parcourir(v, fct1);
   cout << v << endl;
   cout << "----------" << endl;

   cout << endl;
   return EXIT_SUCCESS;
}
