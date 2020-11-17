//Tafuri Marta 2 AI
/*Date due variabili di nome var1 e var2, contenenti due valori numerici diversi,
scriviamo un programma che esegue lo scambio dei numeri che tali variabili contengono.
Eseguire una stampa delle variabili prima e dopo lo scambio.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1 = 5 ;
    int var2 = 10 ;
    int tmp;

    printf("\tPRIMA DELLO SCAMBIO\n") ;
    printf("var1 = %d\nvar2 = %d\n", var1, var2) ;

    tmp = var2 ;
    var2 = var1 ;
    var1 = tmp ;

    printf("\tDOPO LO SCAMBIO\n") ;
    printf("var1 = %d\nvar2 = %d\n", var1, var2) ;

    return 0;
}
