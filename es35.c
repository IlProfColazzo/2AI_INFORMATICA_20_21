//Gaetani Roberto 2 AI
/*
Scrivere un programma  che permetta di separare la parte intera dalla parte decimale 
del risultato di una divisione.
L’algoritmo è il seguente:
leggi due numeri interi;
esegui la divisione tra interi:
converti i numeri interi in reali;
esegui la divisione tra reali;
sottrai al risultato reale la parte intera, ottenendo così solo la parte decimale;
visualizza i risultati sullo schermo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1Int,n2Int,risInt;
	float n1Float,n2Float,risFloat,pDec;

    printf("valore dividendo intero: ");
    scanf("%d",&n1Int);
    printf("Valore divisore intero: ");
    scanf("%d",&n2Int);
    risInt=n1Int/n2Int;
    
    n1Float=(float) n1Int;
    n2Float=(float) n2Int;
    risFloat=n1Float/n2Float;
    
    pDec=risFloat-risInt;
    printf("Risltato intero: %d\n",risInt);
    printf("Risltato intero: %f\n",risFloat);
    printf("Risltato intero: %f",pDec);

    return 0;
}
