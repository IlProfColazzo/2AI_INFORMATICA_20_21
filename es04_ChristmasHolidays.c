//Alberto Lombardo 2 AI
/*Data in input la misura di una circonferenza, calcolare e visualizzare l’area del cerchio.*/

#include <stdio.h>
#include <stdlib.h>
#define PIGRECO 3.14

int main()
{
   float area;
   float circonferenza;
   float raggio;

   printf ("inserisci il valore della circonferenza: ");

   scanf("%f",&circonferenza);

   raggio=circonferenza/(2*PIGRECO);

   area=PIGRECO*(raggio*raggio);
   printf("misura dell'area del cerchio: %f \n",area);

    return 0;
}
