//Raino' Michael 2 AI
/*
Il sistema fiscale è proporzionale per fasce di reddito, cioè all’aumentare del reddito dichiarato
aumenta la % di tassazione; le fasce di reddito sono le seguenti:
• 0,00 – 10000,00: esenti
• 10000,01 – 20000,00: 12%
• 20000,01 – 35000,00: 18%
• 35000,01 – 60000,00: 27%
• 60000,01 – 78000,00: 48%
• oltre 60%
Scrivere un programma che calcola l’imposta che un contribuente deve versare in base 
al proprio reddito inserito da tastiera. Il programma visualizza anche il modo in cui è stata calcolata l’imposta.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reddito, imposta;

    printf("dammi il reddito: ");
    scanf("%f", &reddito);

    if(reddito>=0 && reddito<=10000){
        printf("esenti");
    }
    else if(reddito>=10000,01 && reddito<=20000){
        printf("l'imposta e' del 12%%\n");
        imposta=reddito*12/100;
        printf("l'imposta e' del %.2f ricavata da: reditto*12/100", imposta);
    }
    else if(reddito>=20000,01 && reddito<=35000){
        printf("l'imposta e' del 18%%\n");
        imposta=reddito*18/100;
        printf("l'imposta e' del %.2f ricavata da: reditto*18/100", imposta);
    }
    else if(reddito>=35000,01 && reddito<=60000){
        printf("l'imposta e' del 27%%\n");
        imposta=reddito*27/100;
        printf("l'imposta e' del %.2f ricavata da: reditto*27/100", imposta);
    }
    else if(reddito>=60000,01 && reddito<=78000){
        printf("l'imposta e' del 48%%\n");
        imposta=reddito*48/100;
        printf("l'imposta e' del %.2f ricavata da: reditto*48/100", imposta);
    }
    else if(reddito>78000){
        printf("l'imposta e' del: 60%%\n");
        imposta=reddito*60/100;
        printf("l'imposta e' del %.2f ricavata da: reditto*60/100", imposta);
    }
    return 0;
}
