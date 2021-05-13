//Pindinello Francesco 2 AI
/*
Scrivi un programma che legge due numeri interi ed effettua lo scambio dei valori dei due numeri letti 
se il valore del primo è maggiore del valore del secondo. 
Il programma stamperà a video i nuovi valori se e solo se è avvenuto lo scambio.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, tmp;

    printf("Inserisci il valore del numero 1: ");
    scanf("%d",&num1);
    printf("Inserisci il valore del numero 2: ");
    scanf("%d",&num2);

    if (num1 > num2){
        tmp = num1;
        num1 = num2;
        num2 = tmp;
        printf("Valore del numero 1 = %d",num1);
        printf("Valore del numero 2 = %d",num2);
    }

    return 0;
}
