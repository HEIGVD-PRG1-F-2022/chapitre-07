#ifndef PAYS_H
#define PAYS_H

#include <string>

class Pays {
public:
   // Constructeur
   Pays(const std::string& nom, double population, unsigned superficie);
   // Sélecteurs
   std::string getNom() const;
   double getPopulation() const;
   unsigned getSuperficie() const;
   // Modificateurs
   void setNom(const std::string& nom);
   void setPopulation(double population);
   void setSuperficie(unsigned superficie);
   // Autres
   double densitePopulation() const;
private:
   std::string nom;     // nom du pays 
   double population;   // en mio d'habitants
   unsigned superficie; // en km2
};

#endif
