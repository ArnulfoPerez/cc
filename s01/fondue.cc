#include <iostream>
using namespace std;

int main()
{
  const int BASE(4);     // nombre de personnes pour la recette de base
		
  // Pour faire une fondue fribourgeoise pour 4 personnes il faut : 
		
  double fromage(800.0);    // 800gr de Vacherin fribourgeois
  double eau(2.0);          // 2dl d'eau
  double ail(2.0);          // 2 gousses d'ail
  double pain(400.0); 	    // 400 gr de pain
		
  /* On supposera pour cet exercice que l'utilisateur ne saisit que
   * des valeurs strictement positives mais nous pourrons faire mieux
   * dès la semaine prochaine 
   */
  cout << "Entrez le nombre de personnes conviées à la fondue : ";
  int nb_convives;
  cin >> nb_convives;
		
  // Mise à jour des quantités en fonction du nombre de convives :
  double ratio = nb_convives; // Notez le 'double' ici...
  ratio /= BASE;              // ... pour éviter une division entière.
  fromage *= ratio;
  eau 	  *= ratio;
  ail 	  *= ratio;
  pain 	  *= ratio;

  cout << "Pour faire une fondue fribourgeoise pour " << nb_convives << " personne(s), " << endl;
  cout << ("il vous faut : ") << endl;
  cout << " - " << fromage << " gr de Vacherin fribourgeois" << endl;
  cout << " - " << eau << " dl d'eau" << endl;
  cout << " - " << ail << " gousse(s) d'ail" << endl;
  cout << " - " << pain << " gr de pain" << endl;
  cout << " - du poivre à volonté" << endl;

  return 0;
}

