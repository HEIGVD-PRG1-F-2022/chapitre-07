#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "Point.h"
using namespace std;

void afficher(const Point& p) {
   cout << fixed << setprecision(3)
        << "(" << p.abscisse() << "," << p.ordonnee() << ")" << endl
        << "(" << p.rho() << "," << p.theta() << ")" << endl << endl;
}

int main() {
   Point p(1, 0);

   for (int i = 1; i <= 8; ++i) {
      p.rotation(PI / 4);
      afficher(p);
   }

   system("PAUSE");
   return EXIT_SUCCESS;
}

//(0.707,0.707)
//(1.000,0.785)
//
//(0.000,1.000)
//(1.000,1.571)
//
//(-0.707,0.707)
//(1.000,2.356)
//
//(-1.000,0.000)
//(1.000,3.142)
//
//(-0.707,-0.707)
//(1.000,3.927)
//
//(-0.000,-1.000)
//(1.000,4.712)
//
//(0.707,-0.707)
//(1.000,5.498)
//
//(1.000,-0.000)
//(1.000,6.283)
