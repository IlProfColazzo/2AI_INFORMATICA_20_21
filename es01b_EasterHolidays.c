//Ferilli Marco 2 AI
/*
Scrivere un programma che legga un numero che indica la nazionalita di una persona 
(0 = italiano, 1 = inglese, 2 = francese) e stampa a video un messaggio di saluto nella corrispondete lingua.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nazionalita;
    printf("Dammi la nazionalità della persona");
    scanf("%d", &nazionalita);
    if(nazionalita==0){
        printf("Ciao");
    }
    else if(nazionalita==1){
            printf("Hello");
    }
    else if(nazionalita==2){
        printf("Salut");
    }
    return 0;
}
