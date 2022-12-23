#include "Point.h"

//Point operator +(const Point& p1, const Point& p2) {
//   return Point(p1.x + p2.x, p1.y + p2.y);
//}

Point::Point(float x, float y) : x(x), y(y) {
}

void Point::deplacer(float dx, float dy) {
   x += dx;
   y += dy;
}

float Point::abscisse() const {
   return x;
}

float Point::ordonnee() const {
   return y;
}

Point Point::operator +(const Point& p) const {
   return Point(this->x + p.x, this->y + p.y); // this-> pas strict. nécess.
}

