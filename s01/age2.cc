#include <iostream>
using namespace std;

int main()
{
  // Déclarations
  int age;
  int annee;

  cout << "Entrez votre âge :" << endl; // Affichage de la question
  cin >> age;                           // Lecture de la réponse
  annee = 2015 - age;                   // Calcul


  // Affichage de l'année
  cout << "Vous êtes né(e) vers l'année " << annee << endl;

  return 0;
}

