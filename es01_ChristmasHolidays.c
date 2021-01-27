//Marco Ferilli 2 AI
/*Scrivere un programma che presi in input due numeri interi dall’utente presenti a video i risultati
 delle quattro operazioni aritmetiche di base (+,-,*,/)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int add;
    int sott;
    int molt;
    int div;

    printf ("Il valore del 1 numero e' ");
    scanf  ("%d", &num1);
    printf ("Il valore del 2 numero e' ");
    scanf  ("%d", &num2);
    add = num1 + num2;
    printf ("Il valore dell' addizione e' %d\n", add);
    sott = num1 - num2;
    printf ("Il valore della sottrazione e' %d\n", sott);
    molt = num1 * num2;
    printf ("Il valore della moltiplicazione e' %d\n", molt);
    div = num1 / num2;
    printf ("Il valore della divisione e' %d\n", div);





    return 0;
}
