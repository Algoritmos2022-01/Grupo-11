#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
4) Diseñe la función que genere un número aleatorio. La función debe devolver un número
aleatorio entre 1 y 6 (investigar como se generan números aleatorios)
*/

void numeroaleatorio() 
{
  srand((unsigned)time(0));
  cout << (rand() % 5) + 1 << endl;
}

int main()
{
  numeroaleatorio();
  return 0;
}
