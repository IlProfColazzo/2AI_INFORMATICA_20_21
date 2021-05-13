//Tafuri Marta 2 AI
/*
Un supermercato effettua lo sconto in base all’importo totale della spesa. La tabella sconti è riportata di
seguito.
		Importo spesa         %sconto
		Spesa < 50€              5%
		50€ <= Spesa < 65€       6%
		65€ <= Spesa < 80€       7%
		Spesa >= 80€            10%
Inserendo il prezzo totale della spesa, visualizzare sullo schermo la percentuale dello sconto applicata, il
valore dello sconto e il prezzo finale da pagare.
*/

#include <stdio.h>
#include <stdlib.h>

#define TASSOPERC1 5
#define TASSOPERC2 6
#define TASSOPERC3 7
#define TASSOPERC4 10

int main()
{
    float prezzo_tot = 0, sconto = 0, da_pagare = 0 ;

    printf("Inserisci il prezzo totale della spesa: ") ;
    scanf("%f", &prezzo_tot) ;

    if(prezzo_tot < 50){
        printf("\nLa percentuale dello sconto e' 5") ;
        sconto = (prezzo_tot * TASSOPERC1) / 100 ;
        da_pagare = prezzo_tot - sconto ;
        printf("\nIl valore dello sconto e' %.2f e il prezzo da pagare e' %.2f\n", sconto, da_pagare) ;
    }
    else if(prezzo_tot < 65){
        printf("\nLa percentuale dello sconto e' 6") ;
        sconto = (prezzo_tot * TASSOPERC2) / 100 ;
        da_pagare = prezzo_tot - sconto ;
        printf("\nIl valore dello sconto e' %.2f e il prezzo da pagare e' %.2f\n", sconto, da_pagare) ;
    }
    else if(prezzo_tot < 80){
        printf("\nLa percentuale dello sconto e' 7") ;
        sconto = (prezzo_tot * TASSOPERC3) / 100 ;
        da_pagare = prezzo_tot - sconto ;
        printf("\nIl valore dello sconto e' %.2f e il prezzo da pagare e' %.2f\n", sconto, da_pagare) ;
    }
    else{
        printf("\nLa percentuale dello sconto e' 10") ;
        sconto = (prezzo_tot * TASSOPERC4) / 100 ;
        da_pagare = prezzo_tot - sconto ;
        printf("\nIl valore dello sconto e' %.2f e il prezzo da pagare e' %.2f\n", sconto, da_pagare) ;
    }

    return 0;
}
