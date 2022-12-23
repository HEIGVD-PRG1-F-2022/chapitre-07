#ifndef POINT_H
#define POINT_H

const float PI = 3.14159f;

class Point {
public:
   Point(float x = 0.f, float y = 0.f);
   void deplacer(float dx, float dy);
   void rotation(float angle); // en radians
   float abscisse() const;
   float ordonnee() const;
   float rho() const;
   float theta() const; // entre 0 et 2 pi
private:
   float x, y; // coord. cartésiennes du point
};

#endif

