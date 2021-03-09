//Molle Samuele 2 AI
/*
Le spese di spedizione di pacchi variano a secondo del peso: fino a 3kg, 
il costo è di 5€; dopo i 3Kg  e fino a 10Kg, il costo è di 8€; oltre i 10Kg è di 10€. 
Dato il peso del pacco, calcola la spesa di spedizione.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;

    printf("Inserisci il peso del pacco ");
    scanf("%d",&p);

    if(p<=3){
        printf("5 euro");
    }
    else if(p<=10){
        printf("8 euro");
    }
    else{
        printf("10 euro");
    }

    return 0;
}
