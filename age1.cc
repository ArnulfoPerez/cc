#include <iostream>
#include <time.h>

using namespace std;

// Get current year
const int currentYear() {
    time_t     now = time(0);
    struct tm  tstruct;
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format

    return 1900+tstruct.tm_year;
}


int main()
{
  cout << "Entrez votre âge: \n" << endl; // Affichage de la question
  int age;                              // Déclaration de variable pour stocker l'âge
  cin >> age;                           // Lecture de la réponse

  // Déclaration et initialisation de la variable pour stocker l'année de naissance
  int annee(currentYear()- age);

  // Affichage de l'année de naissance (stockée en mémoire)
  cout << "Vous êtes né(e) vers l'année " << annee
       << endl;

  return 0;
}
