//Marco Ferilli 2 AI
/*Dato in input un intero che indica la temperatura in gradi centigradi, calcolare e 
stampare a video l’equivalente in Fahrenheit. Il fattore di conversione deve essere una costante definita tramite la direttiva #define.*/
#include <stdio.h>
#include <stdlib.h>
#define TASSOCONV 32
int main()
{
   int tempgradi = 0;
   int tempfar = 0;
   printf ("Inserisci valore temperatura gradi",tempgradi);
   scanf("%d", &tempgradi);
   tempfar = tempgradi + TASSOCONV;
   printf("La temperatura in Fahrenheit e': %d\n", tempfar);


    return 0;
}
