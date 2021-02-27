//D'Amico Davide 2 AI
/*
Scrivi un programma che dato un numero in input, 
scriva a video un messaggio che indichi se il numero 
è maggiore o minore di dieci.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    printf("Dammi un numero: ");
    scanf("%d",&num);
    if(num<10){
        printf("%d e' minore di 10",num);
    }
    else{ 
		if(num>10){
            printf("%d e' maggiore di 10",num);
		}
    }
    return 0;
}
