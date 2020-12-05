// Ariano Venneri 2AI
/* Scrivi un programma che visualizzi il quoziente e il resto della divisione tra due numeri interi inseriti da tastiera*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dividendo;
    int divisore;
    int resto;
    int quoziente;

    dividendo=0;
    divisore=0;
    resto=0;
    quoziente=0;


    printf ("inserisci il valore del dividendo ");
    scanf ("%d",&dividendo);
    printf ("inserisci il valore del divisore ");
    scanf ("%d",&divisore);
    resto=dividendo%divisore;
    quoziente=dividendo/divisore;
    printf ("il valore del resto e': %d", resto);
    printf ("\n il valore del quoziente e': %d", quoziente);
    return 0;
}
