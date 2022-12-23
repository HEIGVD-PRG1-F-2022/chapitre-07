#include "Message.h"
#include <ctime>
#include <iostream>

using namespace std;

static string timeToString(time_t t) {
   char buffer[20];
   strftime(buffer, sizeof (buffer), "%d.%m.%Y %H:%M", localtime(&t));
   return string(buffer);
}

Message::Message(const string& expediteur, const string& destinataire)
: dateCreation(timeToString(time(NULL))), expediteur(expediteur), destinataire(destinataire) {
}

void Message::ajouter(const string& ligneTexte) {
   texteMessage.push_back(ligneTexte);
}

void Message::afficher() const {
   cout << toString();
}

string Message::toString() const {
   string str = "From : " + expediteur + '\n' +
                "To   : " + destinataire + '\n' +
                "Date : " + dateCreation + '\n';
   str += '\n';
   for (const string& s : texteMessage)
      str += s + '\n';
   return str;
}
