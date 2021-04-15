//Raino' Michael 2 AI
/*
Scrivere un programma che legga un numero che indica la nazionalita di una persona 
(0 = italiano, 1 = inglese, 2 = francese) e stampa a video un messaggio di saluto nella corrispondete lingua.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num;

    printf("Dammi un numero da 0 a 2: ");
    scanf("%c", &num);

    switch(num){
    case '0':
        printf("ciao");
        break;
    case '1':
        printf("hello");
        break;
    case '2':
        printf("salut");
        break;
    }
    return 0;
}
