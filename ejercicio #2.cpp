#include <iostream>
using namespace std;

/* 
2) Una función recibe 2 parámetros que indican el total de filas y columnas que
   se deben emplear para imprimir un rectángulo por pantalla. Ejemplo
   rectangulo(2,5)
    * * * * *
    * * * * * */

void Filas(int f, int c) 
{
  for (int i = 1; i <= f; i++) 
{
    for (int j = 1; j <= c; j++) 
    {
      cout << " * ";
    }
    cout << endl;
  }
}