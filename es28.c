// Prof. Colazzo Andrea
/*Effettuiamo la divisione tra numeri interi salvando il risultato prima 
in una variabile intera e successivamente in una variabile reale.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividendo = 3, divisore = 2, ris1;
    float ris2;
    ris1 = dividendo / divisore;
    ris2 = dividendo / divisore;
    printf("\n Risultato nella variabile intera: %d", ris1);
    printf("\n Risultato nella variabile reale: %f", ris2);
    return 0;
}
