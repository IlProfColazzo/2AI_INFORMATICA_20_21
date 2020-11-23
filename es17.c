//Molle Samuele 2 AI
/*Dati i valori di due variabili eseguire lo scambio dei valori senza utilizzare variabili 
temporanei e utilizzando solo le operazioni di somma e sottrazione (Hint: google ti spiegherà come fare).*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1;
    int var2;

    var1 = 5;
    var2 = 8;

    printf("Primo valore %d, secondo valore %d\n",var1,var2);

    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;

    printf("Primo valore %d, secondo valore %d",var1,var2);

    return 0;
}
