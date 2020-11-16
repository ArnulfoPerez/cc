#include <iostream>
using namespace std;

int main()
{
  cout << "Entrez votre âge :" << endl; // Affichage de la question
  int age;                              // Déclaration de variable pour stocker l'âge
  cin >> age;                           // Lecture de la réponse

  // Déclaration et initialisation de la variable pour stocker l'année de naissance
  int annee(2015 - age);

  // Affichage de l'année de naissance (stockée en mémoire)
  cout << "Vous êtes né(e) vers l'année " << annee
       << endl;

  return 0;
}
