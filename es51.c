//Munitello Lorenzo 2 AI
/*
Dato un numero intero tra 1 e 12, che rappresenta il mese corrente, 
stampare il nome del mese per esteso (“Gennaio” ... “Dicembre”).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Inserisci un numero compreso tra 1 e 12: ");
    scanf("%d", &num);

    if(num==1){
        printf("Gennaio");
    }
    else if(num==2){
        printf("Febbraio");
    }
     else if(num==3){
        printf("Marzo");
    }
     else if(num==4){
        printf("Aprile");
    }
    else if(num==5){
        printf("Maggio");
    }
     else if(num==6){
        printf("Giugno");
    }
     else if(num==7){
        printf("Luglio");
    }
     else if(num==8){
        printf("Agosto");
    }
     else if(num==9){
        printf("Settembre");
    }
     else if(num==10){
        printf("Ottobre");
    }
     else if(num==11){
        printf("Novembre");
    }
     else if(num==12){
        printf("Dicembre");
    }
    else{
        printf("Mese inesistente");
    }
    return 0;
}
