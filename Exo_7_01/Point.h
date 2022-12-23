#ifndef POINT_H
#define	POINT_H

class Point {
public:
   Point(float x = 0.f, float y = 0.f);
   void deplacer(float dx, float dy);
   void afficher() const;
private:
   float x, y;
};

#endif

