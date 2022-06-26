#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>


using namespace std;

/*
1. Una función que recibe como parametros 2 número enteros, que indica el inicio y el fin de una serie.
Se pide calcular la sumatoria de los números comprendidos entre el inicio y fin de la serie.
Nota: El primer entero puede ser mayor o menor que el segundo.

*/


int pedro ()
{
  int a;
  int b;
  int suma = 0;
  int i;

  cout<<endl<<"Ingrese 2 valores: "; 
  cin>> a;
  cin>> b;
  
  if(a>b)
  {
      for ( i=b; i<=a; i++){
        suma = i + suma;
      }
      cout<<endl<<"La suma de los números entre "<<a<< " y " <<b<< " es: " <<suma;
  }
  else 
  {
    for ( i=a; i<=b; i++)
    {
      suma = i + suma; 
    }
     cout<<endl<<"La suma de los números entre "<<a<< " y " <<b<< " es: " <<suma;
  };
  return suma;
}

/*
2. Una función que recibe 2 parametros que indican el total de filas y columnas que se deben emplear para 
imprimir un rectangulo por pantalla.
Ejemplo: Rectangulo (2,5)=
*****
*****
*/

void Sofia (int c, int d)
{
  int e = 1;
  int f = 1;
  while (e<=c){
    e++;
    for (f = 1; f <= d; f++){
      cout<<"*";
    }
    cout<<endl;
  }
  }

/*
3. Usando la función factorial vista en clases, 
se pide que desde el main se imprima la sumatoria de los factoriales 
desde 1 a 15 (debe utilizar un bucle)
*/

double carlos (double g)
{
    double i=1; 
        for (double x=1; x<=g;)
        {i=(x*i);
        x++;       
        }
     return i; 
}

/*
4. Diseñe la función que genere un número aleatorio. La función debe devolver un número aleatorio entre 1 y 6 
(invesitgar como se generan números aleatorios)
*/

void Fernanda ()
{
int k;
srand(time(NULL));
k = 1 + rand () % (5);
cout<<k<<endl;

}




int main ()
{
  pedro();
  
  int c;
  int d;
  cout<<endl<<"Ingrese 2 valores: ";
  cin>>c;
  cin>>d;
  Sofia (c,d);

  cout<<endl<< "La suma de los factoriales del 1 al 15 es: "<<carlos (15) + carlos (14) + carlos (13) 
  + carlos (12)+ carlos (11) + carlos (10) + carlos (9)
  + carlos (9) + carlos (8) + carlos (7) + carlos (6) + carlos (5) + carlos (4) + carlos (3) + carlos (2) 
  + carlos (1);

  cout<<endl<<"A continuación, se generará un número aleatorio entre 1 y 6: ";
  Fernanda();
 
 return 0;
}