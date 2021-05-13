//Leone Francesco 2 AI
/*
Il costo del biglietto di un traghetto viene calcolato operando una distinzione tra autovetture e camion, 
ripartendo ulteriormente i veicoli per cilindrata.
Scrivere un programma che permetta di conoscere il costo del biglietto in ogni situazione.
		Autovetture
		Fino a 1000cc         20€
		Fino a 2000cc         30€
		Oltre			      40€
		
		Camion
		Fino a 2000cc         40€
		Fino a 3000cc         50€
		Oltre			      100€
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char v;
    int c,costo;
    printf("Inserisci il tipo di veicolo e la cilindrata:\n");
    printf("A - Autovettura\n");
    printf("C - Camion\n");
    scanf("%c%d",&v,&c);

    if(v=='A'){
        if(c<=1000)
            costo=20;
        else if(c<=2000)
            costo=30;
        else
            costo=40;
        printf("Il costo e' di:%d euro",costo);
    }
    else if(v=='C'){
        if(c<=2000)
            costo=40;
        else if(c<=3000)
            costo=50;
        else
            costo=100;
        printf("Il costo e' di:%d euro",costo);
    }
    else
        printf("!!!ERRORE!!!");
    return 0;
}
