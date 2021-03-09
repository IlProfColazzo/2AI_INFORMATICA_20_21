//Stendardo Giuseppe 2 AI
/*
Scrivi un programma che visualizzi la differenza di due numeri a e b se il loro prodotto 
è maggiore di 10, oppure la loro somma se il loro prodotto è minore o uguale a 10.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,prodotto,somma,differenza;

    printf("inserisci a e b: ");
    scanf("%d,%d",&a,&b);
	
	prodotto=a*b;

    if (prodotto>10){
		differenza=a-b;
        printf("la differenza di a e b è maggiore di 10: ");
    }
    else{
       somma=a+b;
       printf("la somma di a e b è maggiore o uguale: ");
    }

    return 0;
}
