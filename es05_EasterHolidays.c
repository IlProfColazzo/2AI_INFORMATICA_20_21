//Tafuri Marta 2 AI
/*
Scrivere un programma che riconosca il tipo di carattere immesso da tastiera. Il particolare l’utente inserirà
un carattere e il programma comunicherà se si tratta di una parentesi aperta tonda, quadra o graffa.
Altrimenti stampa un messaggio che indica che il carattere non è una parentesi aperta.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char carattere ;

    printf("Inserisci un carattere: ") ;
    scanf("%c", &carattere) ;

    switch(carattere){
        case '(':
               printf("Il carattere inserito e' una parentesi tonda aperta\n") ;
               break ;

        case '[':
               printf("Il carattere inserito e' una parentesi quadra aperta\n") ;
               break ;

        case '{':
               printf("Il carattere inserito e' una parentesi graffa aperta\n") ;
               break ;

        default:
               printf("Il carattere inserito non e' una parentesi aperta\n") ;
               break ;
    }

    return 0;
}
