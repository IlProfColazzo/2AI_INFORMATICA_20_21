//Filoni Matteo 2 AI
/*
Si scriva un programma in grado di calcolare la radice quadrata di un numero inserito da tastiera.
Il calcolo deve essere effettuato se e solo se il numero inserito risulta essere maggiore o uguale a 0;
altrimenti fornire in output un opportuno messaggio di errore.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1;
    float radice;
    printf("Inserisci un numero ");
    scanf("%f",&num1);
    if(num1>=0){
        radice= sqrt(num1);
        printf("La radice quadrata del numero equivale a: %.2f",radice);
    }
    else{
        printf("!! IMPOSSIBILE CALCOLARE LA RADICE QUADRATA DEL NUMERO !!");
    }

    return 0;
}
