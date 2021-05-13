//Prof. Colazzo Andrea
/*
Si scriva un programma che permetta di acquisire da tastiera un numero intero N. 
Successivamente dovrà essere effettuata la somma di N valori inseriti da tastiera.
SOLUZIONE 0 ... N-1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, dato, somma=0;
    printf("Dammi il numero N: ");
    scanf("%d",&N);
    for (i = 0; i < N; i++){
        printf("Dammi un numero: ");
        scanf("%d",&dato);
        somma += dato;
    }
    printf("La somma dei numeri da te inseriti e' %d.",somma);
    return 0;
}

