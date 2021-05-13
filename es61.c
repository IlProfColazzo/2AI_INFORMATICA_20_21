//Prof. Colazzo Andrea
/*
Si scriva un programma che legge un numero intero e calcola la somma di 
tutti i numeri compresi tra 1 e il numero letto.
Per esempio, se viene inserito 4 esegue il calcolo della somma dei primi 4 numeri, cioè: 1 + 2 + 3 + 4 = 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, somma=0;
    printf("Dammi il numero N: ");
    scanf("%d",&N)
    for (i = 0; i <= N; i++){
        somma += i;
    }
    printf("La somma dei primi %d numeri e' %d.",N, somma);
    return 0;
}


