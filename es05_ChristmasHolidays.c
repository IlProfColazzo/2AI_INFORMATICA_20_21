//Francesco Mattia 2 AI
/*Calcolare e visualizzare a video la misura della diagonale di un rettangolo. Base e altezza sono forniti in input*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float b=0;
    float h=0;
    float d;
    printf("Inserisci valore base: ");
    scanf("%f", &b);
    printf("Inserisci valore altezza: ");
    scanf("%f", &h);
    d=sqrt((b*b)+(h*h));
    printf("\nIl valore della diagonale e': %.2f\n", d);


    return 0;
}
