#include <cmath>
#include "Point.h"
using namespace std;

Point::Point(float x, float y) : x(x), y(y) {
}

void Point::deplacer(float dx, float dy) {
   x += dx;
   y += dy;
}

void Point::rotation(float angle) {
   const float RHO = rho();
   const float THETA = theta() + angle;
   x = RHO * cos(THETA);
   y = RHO * sin(THETA);
}

float Point::abscisse() const {
   return x;
}

float Point::ordonnee() const {
   return y;
}

float Point::rho() const {
   return hypot(x, y); // ou sqrt(x * x + y * y) (mais moins bon)
}

float Point::theta() const {
   // représentation entre 0 et 2*pi   
   if (y >= 0.f) {
      return atan2(y, x);
   } else {
      return atan2(y, x) + 2 * PI;
   }
}
