//Molle Samuele 2AI

/*Scrivi un programma che legge una sequenza NUM di numeri interi positivi 
strettamente maggiori di 0 e ne ricerca il valore massimo visualizzandolo sullo schermo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, i, max, n;

    printf("Dammi un numero = ");
    scanf("%d",&NUM);

    max = 0;

    for(i=0;i<NUM;i++){
        printf("Inserire un numero maggiore di 0 = ");
        scanf("%d",&n);
        if(n>max){
            max = n;
        }
    }
    printf("Maggiore = %d", max);

    return 0;
}
