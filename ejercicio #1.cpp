#include <iostream>
using namespace std;

/* 
1) Una funcion que recibe como parametros 2 números,
  que indica el inicio y el fin de una serie.
  Se pide calcular la sumatoria de los números
  comprendidos entre el inicio y el fin de la serie.
  Nota: el primer entero puede ser mayor o menor que el segundo 
  sumatoria(4,9) es los mismo que sumatoria(9,4) : 4+5+6+7+8+9 */

void Serie(int s1, int s2) 
{
  int r = 0;
  if (s1 < s2) 
  {
    for (int i; s1 < s2 + 1; s1++) 
    {
      r = r + s1;
      cout << "\nEl resultado es: " << r;
    }
  } else {
    for (int i; s2 < s1 + 1; s2++) 
    {
      r = r + s2;
      cout << "\nEl resultado es: " << r;
    }
  }
}

int main() 
{
  cout << "\n";
  Filas(2, 5);
  Serie(8, 4);
  cout << "\n";
  return 0;
}