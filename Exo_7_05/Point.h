#ifndef POINT_H
#define	POINT_H

class Point {
//   friend Point operator+(const Point& p1, const Point& p2);
public:
   Point(float x = 0.f, float y = 0.f);
   void deplacer(float dx, float dy);
   float abscisse() const;
   float ordonnee() const;
   Point operator +(const Point& p) const;
private:
   float x, y;
};

#endif

