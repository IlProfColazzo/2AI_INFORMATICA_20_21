//Marta Tafuri 2AI
/*Scrivi un programma che legge in input un valore corrispondente a un numero di secondi e lo trasforma in ore, minuti e secondi.
    (Esempio: 36956 secondi corrispondono a 10 ore, 15 minuti e 56 secondi)*/
	
#include <stdio.h>
#include <stdlib.h>

#define SecMin 60
#define SecOre 3600

int main()
{
    int num_sec = 0 ;
    int ore = 0 ;
    int min = 0 ;
    int sec = 0 ;

    printf("Inserisci il valore in secondi da trasformare: ") ;
    scanf("%d", &num_sec) ;
    printf("\n") ;

    ore = num_sec / SecOre ;
    min = (num_sec % SecOre) / SecMin ;
    sec = (num_sec % SecOre) % SecMin ;

    printf("Il valore in secondi inserito corrisponde a %d ore, %d minuti e %d secondi\n", ore, min, sec) ;

    return 0;
}
