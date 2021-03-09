//Gaetani Roberto 2 AI
/*
Una nuova compagnia telefonica ha promosso l’offerta “oltre 80”: alla cifra fissa di 0.10 € (costo alla risposta)
occorre aggiungere la cifra di 0.15€ per ogni secondo del tempo della telefonata; però oltre gli 80 secondi 
la tariffa di ogni secondo è di 0.09. Fornito da tastiera il numero dei secondi della telefonata, 
visualizzare il costo totale della chiamata. Le tariffe indicate nel testo sono delle costanti.
*/

#include <stdio.h>
#include <stdlib.h>
#define cr 0.10
#define tps 0.15
#define tsd 0.09
#define tassa 15

int main()
{
    int ns;
    float tdps, nsd, pd, pctot;

    printf("Dammi numero secondi: ");
    scanf("%d",&ns);

    if(ns>80){
        tdps=(tps*80)+cr;
        nsd=ns-80;
        pd=nsd*tsd;
        pctot=tdps+pd;
        printf("Il totale della chiamata e' di: %0.2f",pctot);
    }
    else{
        tdps=(tps*ns)+cr;
        printf("Il totale della chiamata e' di: %0.2f",tdps);
    }

    return 0;
}
