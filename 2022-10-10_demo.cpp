//---------------------------------------------------------
// Demo           : 2022-10-10_demo
// Fichier        : 2022-10-10_demo.cpp
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

   cout << "bonjour "s << "a tous"s << endl;

   cout << boolalpha;
   cout << ("maison"   < "mais")    << endl;
   cout << ("mais"     < "maison")  << endl;

   cout << (void*)"mais"      << "\t" << "mais"     << endl;
   cout << (void*)"maison"    << "\t" << "maison"   << endl;
   cout << (void*)"maison"[0] << "\t" << "maison"[0] << endl;

   cout << endl;

   const char* mais     = "mais";
   const char* maison   = "maison";
   cout << (void*)mais       << "\t" << mais      << endl;
   cout << (void*)maison     << "\t" << maison    << endl;
   cout << (void*)maison     << "\t" << maison[0] << endl;
   cout << (void*)&maison[0] << "\t" << maison[0] << endl;

   cout << endl;

   cout << fixed << setprecision(20);
   cout << 1 / 3  << endl; // division entière ;)
   cout << 1 / 3. << endl; // division entière ;)

   cout << ( 1 / 3. == 0.33333333333) << endl;

   return EXIT_SUCCESS;
}
