//Munitello Lorenzo 2 AI
/*
La tessera sconto-benzina permette al suo possessore di avere uno sconto variabile tra il 4% e il 10% sul costo al litro della benzina a seconda della distanza della sua residenza dal confine di Stato. Le fasce sconto sono individuate dal numero di tessera:
• Da 10000 a 19999: fascia 1 sconto 10%
• Da 20000 a 29999: fascia 2 sconto 8%
• Da 30000 a 39999: fascia 3 sconto 6%
• Da 40000 a 49999: fascia 4 sconto 4%
Scrivere un programma che calcoli il costo finale che l’automobilista deve pagare quando si rifornisce a un distributore inserendo il numero di tessera, il costo al litro del carburante e il numero di litri acquistati.
Il programma stampa un errore nel caso in cui il numero di tessera non è valido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroT, numeroL, sconto;
    float costoFin, valoreSco, costoIni, costoLit;

    printf("Inserisci il numero della tessera: ");
    scanf("%d", &numeroT);
    printf("Inserisci il numero di litri: ");
    scanf("%d", &numeroL);
    printf("Inserisci il costo al litro: ");
    scanf("%f", &costoLit);

    if(numeroT<=9999 || numeroT>=500000){
        printf("Il numero della tessera non e' valido");
    }
    else if(numeroT>=10000 && numeroT<=19999){
        sconto = 10;
        costoIni = costoLit * numeroL;
        valoreSco = costoIni / 100 * sconto;
        costoFin = costoIni - valoreSco;
        printf("Il valore del costo finale e': %.2f", costoFin);
    }
    else if(numeroT>=20000 && numeroT<=29999){
        sconto = 8;
        costoIni = costoLit * numeroL;
        valoreSco = costoIni / 100 * sconto;
        costoFin = costoIni - valoreSco;
        printf("Il valore del costo finale e': %.2f", costoFin);
    }
    else if(numeroT>=30000 && numeroT<=39999){
        sconto = 6;
        costoIni = costoLit * numeroL;
        valoreSco = costoIni / 100 * sconto;
        costoFin = costoIni - valoreSco;
        printf("Il valore del costo finale e': %.2f", costoFin);
    }
    else if(numeroT>=40000 && numeroT<=49999){
        sconto = 4;
        costoIni = costoLit * numeroL;
        valoreSco = costoIni / 100 * sconto;
        costoFin = costoIni - valoreSco;
        printf("Il valore del costo finale e': %.2f", costoFin);
    }

    return 0;
}
