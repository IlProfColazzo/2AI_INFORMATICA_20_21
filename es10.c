//Gaetani Roberto 2 AI
/*Modifica il programma dell’esercizio 6 in modo da ottenere l’output riportato
in figura.
-----------------------------------------------
|programma che calcola l'area di un rettangolo|
|valore del primo lato   = 10                 |
|valore del secondo lato = 20                 |
|calcolo dell'area       = 200                |
-----------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lato1=10,lato2=20;
    int area=lato1*lato2;

printf("-----------------------------------------------\n");
printf("|programma che calcola l'area di un rettangolo|\n");
printf("|valore del primo lato   = %d                 |\n",lato1);
printf("|valore del secondo lato = %d                 |\n",lato2);
printf("|calcolo dell'area       = %d                 |\n",area);
printf("-----------------------------------------------\n");

    return 0;
}
