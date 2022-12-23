#include "Pays.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {
   Pays suisse("Suisse", 8.121830, 41290),
        france("France", 66.663766, 547030),
        italie("Italie", 61.855120, 301230),
        allemagne("Allemagne", 80.854408, 357021);
   
   vector<Pays> pays = {suisse, france, italie, allemagne};

   cout << "Pays ayant la plus grande superficie               : "
        << max_element(pays.begin(), pays.end(),
                       [] (const Pays& pays_1, const Pays& pays_2) {
                          return pays_1.getSuperficie() < pays_2.getSuperficie();
                       })->getNom()
        << endl
        << "Pays ayant le plus d'habitants                     : "
        << max_element(pays.begin(), pays.end(),
                       [] (const Pays& pays_1, const Pays& pays_2) {
                          return pays_1.getPopulation() < pays_2.getPopulation();
                       })->getNom()
        << endl
        << "Pays ayant la densite de population la plus grande : "
        << max_element(pays.begin(), pays.end(),
                       [] (const Pays& pays_1, const Pays& pays_2) {
                          return pays_1.densitePopulation() < pays_2.densitePopulation();
                       })->getNom()
        << endl;
      
   return EXIT_SUCCESS;
}

// Pays ayant la plus grande superficie               : France
// Pays ayant le plus d'habitants                     : Allemagne
// Pays ayant la densite de population la plus grande : Allemagne

