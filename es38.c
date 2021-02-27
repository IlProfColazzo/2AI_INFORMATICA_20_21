// Prof. Colazzo Andrea
/*
Scrivere un programma che stabilisce se uno studente è maggiorenne.
In input viene fornita l’età dello studente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eta;
    printf("Introduci l’eta’ dello studente: ");
    scanf("%d",&eta);
    if (eta >= 18){
    	printf("Lo studente e’ maggiorenne");
    }
    return 0;
}
