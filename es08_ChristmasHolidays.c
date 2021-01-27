//Lorenzo Munitello 2 AI
/*Si legga da tastiera il numero di prodotti che si vuole acquistare, il prezzo unitario e l'aliquota IVA da
applicare. Visualizzare a video il prezzo totale da pagare.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numeroProdotti, iva;
   float prezzoUnitario;
   float tassa, prezzoConIva, prezzoTot;
    printf("Numero di prodotti aqcuistati: ");
    scanf("%d", &numeroProdotti);
    printf("Valore del prezzo unitario: ");
    scanf("%f", &prezzoUnitario);
    printf("Valore dell' IVA applicata: ");
    scanf("%d", &iva);

    tassa = (prezzoUnitario/100) * iva;
    prezzoConIva = prezzoUnitario + tassa;
    prezzoTot = numeroProdotti * prezzoConIva;

    printf("Valore del prezzo unitario: %f, Valore della tassa applicata: %f, Valore del prezzo totale: %f", prezzoUnitario, tassa, prezzoTot);




}

