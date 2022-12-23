#include "Message.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
   Message msg("Pierre Burki", "Alfred Strohmeier");
   msg.ajouter("Cher ami,");
   msg.ajouter("RDV demain a 9h.");
   msg.ajouter("Meilleures salutations.");
   msg.ajouter("\nPierre");
   msg.afficher(); // ou cout << msg.toString();
   return EXIT_SUCCESS;
}

// From : Pierre Burki
// To   : Alfred Strohmeier
// Date : 17.02.2016 20:01
// 
// Cher ami,
// RDV demain a 9h.
// Meilleures salutations.
// 
// Pierre
