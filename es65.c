//Raino' Michael 2AI

/*Leggi un numero NUM e un numero EXP e calcola la potenza senza utilizzare 
la funzione pow().
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, EXP, i=0, ris=1;

    printf("Dammi un numero ");
    scanf("%d", &NUM);
    printf("Dammi un esponente ");
    scanf("%d", &EXP);

    for(i=0; i<EXP; i++){
        ris*=NUM;
    }
    printf("Risultato: %d", ris);

    return 0;
}
