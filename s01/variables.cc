#include <iostream>
using namespace std;

int main()
{
  int x, y;                           // Déclarations
  double a, b, c, d;
  x=2; y=4;                           // Affectations
  a=x+y; b=x-y; c=x*y; d=x/y;         // Opérations
                                      // Affichage des résultats
  cout << x << "+" << y << "=" << a << " ; "
       << x << "-" << y << "=" << b << endl
       << x << "*" << y << "=" << c << " ; "
       << x << "/" << y << "=" << d << endl
  ;

  return 0;
}
