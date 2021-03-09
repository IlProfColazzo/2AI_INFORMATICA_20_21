//Lombardo Alberto 2 AI
/*
Dato in input una base ed un esponente, visualizzare a video il valore della relativa potenza.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base,esponente,pot;

    printf("dammi il numero della base: ");
    scanf("%d",&base);
    printf("dammi il numero dell'esponente: ");
    scanf("%d",&esponente);

    pot=pow(base,esponente);

    printf("il numero della potenza e': %d",pot);

    return 0;
}
