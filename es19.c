//Ludovico Stamerra 2 AI
/*Determinare e visualizzare il numero precedente e successivo di un numero intero fornito in input.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,numeroS,numeroP;

    printf("========================================\n");
    printf("| Inserisci un Numero a tua scelta ;) ");
    scanf("%d",&numero);
    numeroP=numero - 1;
    numeroS=numero + 1;
    printf("| Il numero PRECEDENTE e'      %d      |\n",numeroP);
    printf("| Il numero SUCCESSIVO e'      %d      |\n",numeroS);
    printf("========================================");

    return 0;
}
