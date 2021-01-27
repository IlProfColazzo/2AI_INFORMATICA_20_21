//Marta Tafuri 2 AI
/*Dati in input l’area e l’altezza di un triangolo, determinare la base e visualizzarla in output.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1 = 0 ;
    int num_2 = 0 ;
    int moltiplicazione = 0 ;
    int migliaia = 0 ;
    int centinaia = 0 ;
    int decine = 0 ;
    int unita = 0 ;

    printf("Inserisci il valore del primo numero: ") ;
    scanf("%d", &num_1) ;

    printf("Inserisci il valore del secondo numero: ") ;
    scanf("%d", &num_2) ;

    moltiplicazione = num_1 * num_2 ;
    migliaia = moltiplicazione / 1000 ;
    moltiplicazione = moltiplicazione % 1000 ;
    centinaia = moltiplicazione / 100 ;
    moltiplicazione = moltiplicazione % 100 ;
    decine = moltiplicazione / 10 ;
    moltiplicazione = moltiplicazione % 10 ;
    unita = moltiplicazione / 1 ;

    printf("\nMigliaia: %d\n", migliaia) ;
    printf("Centinaia: %d\n", centinaia) ;
    printf("Decine: %d\n", decine) ;
    printf("Unita': %d\n", unita) ;

    return 0;
}
