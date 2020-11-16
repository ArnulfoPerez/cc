#include <iostream>
using namespace std;

int main()
{
  cout << "Entrez votre âge :" << endl; // Affichage de la question
  int age;                              // Déclaration
  cin >> age;                           // Lecture de la réponse
    
  // Affichage de l'année
  cout << "Vous êtes né(e) vers l'année " << 2015-age << endl;

  return 0;
}
