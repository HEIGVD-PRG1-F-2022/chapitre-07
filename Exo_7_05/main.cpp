#include <iostream>
//#include <math.h>

class Point {
public:
  Point(double x, double y){};
};

// Regardez les slides 65 et 66 du chapitre 7 sur les classes pour résoudre
// les tests.
// Au fur et à mesure que vous finissez, vous pouvez enlever les commentaires
// pour les tests suivants.
int main() {
  // Create some random points
  Point p1(1, 2), p2(2, 3), p3(-1, 1);

  // Test addition between the points.
  assert(Point(3, 5) == p1 + p2);
  assert(Point(3, 5) == p2 + p1);
  assert(Point(0, 3) == p1 + p3);
  assert(Point(0, 3) == p3 + p1);

  // Test substraction between the points.
//  assert(Point(-1, -1) == p1 - p2);
//  assert(Point(1, 1) == p2 - p1);
//  assert(Point(2, 1) == p1 - p3);
//  assert(Point(-2, -1) == p3 - p1);

  // Verify the magnitude of the vector.
//  assert(sqrt(5) == p1.mag());
//  assert(sqrt(13) == p2.mag());
//  assert(sqrt(2) == p3.mag());

  // Verify the distance between two vectors.
//  assert(1 == floor(p1.dist(p2)));
//  assert(1 == floor(p2.dist(p1)));

  // Bonus: verify the above, but with 'n' randomly chosen points.

  // Bonus II: add the << operator to print a point to cout like this:
  // cout << Point(3, 4);
  return 0;
}