//Davide D'Amico 2 AI
/*Dato in input il saldo di un conto corrente in euro, calcolarlo in dollari e in sterline.
 Visualizzare i saldi in output. I tassi di conversione devono essere delle costanti definite tramite la direttiva #define.*/
	 
#include <stdio.h>
#include <stdlib.h>

#define TASSODOLLARI 1.19
#define TASSOSTERLINE 0.89
int main()
{
    
    float saldoeuro,saldodollari,saldosterline;
    printf("Inserisci saldoeuro: ");
    scanf("%f",&saldoeuro);
    saldodollari=saldoeuro*TASSODOLLARI;
    printf("Saldo in dollari=%.2f\n",saldodollari);
    saldosterline=saldoeuro*TASSOSTERLINE;
    printf("Saldo in sterline=%.2f\n",saldosterline);


    return 0;
}
