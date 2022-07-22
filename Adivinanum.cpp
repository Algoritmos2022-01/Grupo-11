#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>

using namespace std;

int  NR()
{
int k;
srand(time(NULL));
k = 1 + rand () % (19);
//cout<<k<<endl;
return k;
}

void Jugar( int oportunidades) // Aqui empieza la función.
{
    int num;
    bool ganaste = false;

    int num2 = NR ();
    
    cout<<endl<<"*****************************************************";
    cout<<endl<<"*****************************************************";
    cout<<endl<<"*****************************************************";
    cout<<endl<<"El juego es adivinar el número correcto entre 20 y 1";
    cout<<endl<<"*****************************************************";
    cout<<endl<<"*****************************************************";
    cout<<endl<<"*****************************************************";

int j = 0;
while (j < oportunidades && ganaste == false)
 {
    j++;
    cout<<endl<<"Oportunidad # "<<j;
    cout<<endl<<"ingresa el número: ";
    cin>>num;;
    


    if (num == num2){
        
    ganaste = true;
    }
    else if (num < num2) {
        cout<<endl<<"Ingresa un número mayor";

    }
    else
    {
          cout<<endl<<"Ingresa un número menor";
    }
       
 } //Acá termina el bucle. 
 if (ganaste == true)
 {
     int retorno;
    cout<<endl<<"=====================";
    cout<<endl<<"=====================";
    cout<<endl<<"Felicidades, ganaste";
    cout<<endl<<"=====================";
    cout<<endl<<"=====================";

     cout<<endl<<"¿Desea seguir jugando?";
    cout<<endl<<"============================================";
    cout<<endl<<"Pulse 1 para seguir jugando, pulse 0 para salir: ";

    cin>> retorno;
    if (retorno ==1 )
    {
    NR ();
    Jugar(3);
    }
 }
 else 
 {
    int retorno;
    cout<<endl<<"============================================";
    cout<<endl<<"============================================";
    cout<<endl<<"Perdiste. Suerte para la otra.";
    cout<<endl<<"============================================";
    cout<<endl<<"============================================";

    cout<<endl<<"¿Desea seguir jugando?";
    cout<<endl<<"============================================";
    cout<<endl<<"Pulse 1 para seguir jugando, Pulse 0 para salir: ";
    cin>> retorno;
    if (retorno ==1 )
    {
    NR ();
    Jugar(3);
    }
    else
    {
        cout<<endl<<"Ok";
    }
}
}


//Si pierde el programa le pregunta que si desea volver a jugar.
//No debe estar el número aleatorio. 


int main()
{
    NR ();
    Jugar (3);
 
   return 0;
}