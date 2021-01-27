//Francesco Pindinello 2 AI
/*Scrivi un programma che legge due numeri reali, ne somma le parti intere e quelle decimali,
visualizzando sullo schermo i risultati parziali ottenuti e quindi il risultato totale.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    float pdecnum1, pdecnum2;
    float risdec, ristot;
    int risint;

    printf("Inserisci valore del primo numero: ");
    scanf("%f",&num1);
    printf("Inserisci valore del secondo numero: ");
    scanf("%f",&num2);

    risint = (int)num1 + (int)num2;
    pdecnum1 = num1 - (int)num1;
    pdecnum2 = num2 - (int)num2;
    risdec = pdecnum1 + pdecnum2;
    ristot = risdec + risint;

    printf("Valore della parte intera = %d \n",risint);
    printf("Valore della parte decimale = %.2f \n",risdec);
    printf("Valore del risultato totale = %.2f \n",ristot);



    return 0;
}
