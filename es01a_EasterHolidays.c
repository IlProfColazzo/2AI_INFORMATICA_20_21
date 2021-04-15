//D'Amico Davide 2 AI
/*
Scrivere un programma che legga da tastiera il voto medio di uno studente e stampi a video:
• "errore" se il valore inserito non è maggiore o uguale a 1
• "insufficiente grave" se il valore inserito è compreso tra 1 e 5 (escluso)
• "insufficiente lieve" se il valore inserito è compreso tra 5 e 6 (escluso)
• "sufficiente" se il valore inserito è maggiore o uguale a 6
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float votomedio=0;
    printf("Inserire il voto medio dello studente: ");
    scanf("%f",&votomedio);
    if(votomedio<=1){
        printf("ERRORE");
    }
    else if(votomedio>1&&votomedio<5){
        printf("INSUFFICIENTE GRAVE");
    }
    else if(votomedio>5&&votomedio<6){
        printf("INSUFFICIENTE LIEVE");
    }
    else if(votomedio>=6){
        printf("SUFFICIENTE");
    }
    return 0;
}
