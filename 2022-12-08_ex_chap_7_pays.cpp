//---------------------------------------------------------
// Demo           : 2022-12-08_ex_chap_7_pays
// Fichier        : 2022-12-08_ex_chap_7_pays.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : exercices chap 7.3
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

//--------------------------------------------------
using ulong = unsigned long;
class Pays {
public:
   Pays() = default;
   Pays(const string& nom);
   Pays(const string& nom, ulong nbreHabitants, ulong superficie);

   // getters
   string getNom()            const;
   ulong  getNbreHabitants()  const;
   ulong  getSuperficies()    const;

   // operateurs
   Pays& operator= (const Pays& autre);

private:
   const  string nom;
   ulong  nbreHabitants; // unité
   ulong  superficie;    // km2
};

//--------------------------------------------------
ostream& operator<<(ostream& os, const Pays& pays) {
   os << "nom        : " << pays.getNom()           << endl;
   os << "habitants  : " << pays.getNbreHabitants() << endl;
   os << "superficie : " << pays.getSuperficies()   << endl;
   return os;
}

//--------------------------------------------------
Pays::Pays(const string& nom) : nom(nom) {
   cout << "constructeur" << endl;
//   this->nom           = ""s;             // pas possible si constant
   this->nbreHabitants = 0;
   this->superficie    = 0;
}

//--------------------------------------------------
Pays::Pays(const string& nom, ulong nbreHabitants, ulong superficie) : nom(nom) {
//   this->nom           = nom;              // pas possible si constant
   this->nbreHabitants = nbreHabitants;
   this->superficie    = superficie;
}

//--------------------------------------------------
string Pays::getNom() const {
   return nom;
}

//--------------------------------------------------
ulong  Pays::getNbreHabitants() const {
   return nbreHabitants;
}

//--------------------------------------------------
ulong  Pays::getSuperficies() const {
   return superficie;
}

//--------------------------------------------------
Pays& Pays::operator= (const Pays& autre) {
   if (this != &autre) {
      
      (string&)this->nom  = autre.nom; // lever la constante momentanément

      this->nbreHabitants = autre.nbreHabitants;
      this->superficie    = autre.superficie;
   }
   return *this;
}

//--------------------------------------------------
bool compareParSuperficie(const Pays& lhs, const Pays& rhs) {
   return lhs.getSuperficies() < rhs.getSuperficies();
}

//--------------------------------------------------
using ListePays = vector<Pays>;
ostream& operator<<(ostream& os, const ListePays& liste) {
   for (const Pays& pays : liste)
      os << pays << endl;
   return os;
}

//--------------------------------------------------
int main () {

   Pays Suisse("Suisse",  8'698'000,  41'285);
   Pays France("France", 67'500'000, 643'801);
   Pays Italie("Italie", 59'070'000, 301'230);

   ListePays europe = {Suisse, France, Italie};

   cout << europe << endl;

   cout << "la plus grande superficie" << endl;
   cout << max_element(europe.begin(), europe.end(), compareParSuperficie)->getNom();

   cout << endl;
   cout << "sort ... " << endl;
   cout << europe << endl;
   sort(europe.begin(), europe.end(), compareParSuperficie);
   cout << europe << endl;

//   // une liste de pays
//   ListePays liste(4);
//   liste.push_back(Pays());


   cout << endl;
   return EXIT_SUCCESS;
}
