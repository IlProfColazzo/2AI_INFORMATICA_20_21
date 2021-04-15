//Ferilli Marco 2 AI
/*
Scrivi un programma che legga tre numeri interi e stampi a video la somma 
dei tre numeri se almeno uno di loro Ã negativo; altrimenti stampare il prodotto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    int somma, prodotto;
    printf("Dammi i tre numeri");
    scanf("%d%d%d", &num1,&num2,&num3);
    if(num1<0 || num2<0 || num3<0){
        somma = num1 + num2 + num3;
        printf("La somma e' %d", somma);
    }
    else{
        prodotto = num1 * num2 * num3;
        printf("Il prodotto e' %d", prodotto);
    }
    return 0;
}
