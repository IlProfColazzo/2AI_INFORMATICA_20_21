//Samuele Molle 2 AI
/*Dato in input lo spigolo di un cubo, calcolare e visualizzare a video il suo volume.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float spigolo;
    float volume;

    printf("Inserire il valore dello spigolo ");
    scanf("%f",&spigolo);

    volume = spigolo * spigolo * spigolo;

    printf("Il volume del cubo e' %f",volume);

}
