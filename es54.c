//D'Amico Davide 2 AI
/*
Scrivere un programma che permette di leggere due valori interi da tastiera e 
stampa a video un messaggio che indica se entrambi i valori sono positivi.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Dammi due numeri: ");
    scanf("%d %d",&a,&b);
    if(a>0&&b>0){
        printf("Sono positivi");
    }
    else{
        printf("Uno dei due numeri non e' positivo o non sono positivi");
    }
    return 0;
}
