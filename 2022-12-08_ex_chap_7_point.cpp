//---------------------------------------------------------
// Demo           : 2022-12-08_ex_chap_7
// Fichier        : 2022-12-08_ex_chap_7.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : exercices chap 7
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>

using namespace std;

//--------------------------------------------------
class Point {
public:
   Point(double x = 0.0, double y = 0.0);

   void translater(double dx, double dy);

   double abscisse() const;
   double ordonnee() const;

   void afficher() const;

private:
   double x;
   double y;
};

//--------------------------------------------------
ostream& operator<<(ostream& os, const Point& point) {
   os << "(" << point.abscisse() << ", " << point.ordonnee() << ")";
   return os;
}

//--------------------------------------------------
Point::Point(double x, double y) {
   (*this).x = x;
   this->y = y;
}

//--------------------------------------------------
void Point::translater(double dx, double dy) {
   x += dx;
   y += dy;
}

//--------------------------------------------------
double Point::abscisse() const {
   return x;
}

//--------------------------------------------------
double Point::ordonnee() const {
   return y;
}

//--------------------------------------------------
void Point::afficher() const {
   cout << "(" << x << ", " << y << ")" << endl;
}

void afficher(const Point& point) {
   cout << "(" << point.abscisse() << ", " << point.ordonnee() << ")" << endl;
}

//--------------------------------------------------
int main () {

   Point p1(1.2, 3.4);
   p1.afficher();

   p1.translater(1.0, 2.0);

   p1.afficher();
   afficher(p1);
   cout << p1 << endl;

   cout << endl;
   return EXIT_SUCCESS;
}
