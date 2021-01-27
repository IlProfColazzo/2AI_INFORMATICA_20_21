//Ludovico Stamerra 2 AI
/*Scrivi un programma che legga 2 interi e che comunichi il risultato della divisione tra i 2 numeri presentando 3 cifre decimali.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numi1,numi2;
    float numf1,numf2;
    float div;

    printf("==============================\n");
    printf("Inserisci un Numero Intero:  ");
    scanf("%d",&numi1);
    printf("Inserisci un Secondo Numero Intero:  ");
    scanf("%d",&numi2);
    numf1=(float)numi1;
    numf2=(float)numi2;
    div=numf1/numf2;
    printf("==============================\n");
    printf("| %d : %d = %.3f |\n",numi1,numi2,div);
    printf("==============================\n");
    return 0;
}
