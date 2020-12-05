//Francesco Pindinello 2 AI
/*Svolgere l'esercizio 8. facendo in modo che tutti i dati vengano forniti in input (da tastiera) dall’utente e i risultati
vengano visualizzati in output (sullo schermo)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int costobb, costobp;
  int numerob, numerop;
  int guadagnob, guadagnop, guadagnotot;

  printf("Inserisci il valore del costo del biglietto a bambino: ");
  scanf("%d",&costobb);
  printf("Inserisci il valore del numero dei bambini: ");
  scanf("%d",&numerob);

  costobp = costobb + 10;
  numerop = numerob * 2;
  guadagnob = costobb * numerob;
  guadagnop = costobp * numerop;
  guadagnotot = guadagnob + guadagnop;

  printf("Il Guadagno del parco divertimenti e' %d",guadagnotot);

    return 0;
}
