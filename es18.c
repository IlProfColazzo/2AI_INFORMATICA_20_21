//Giuseppe Stendardo 2 AI
/*Dati in input l’area e l’altezza di un triangolo, determinare la base e visualizzarla in output.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float altezza,area,base;

  printf("valore altezza=");
  scanf("%f",&altezza);
  printf("valore area=");
  scanf("%f",&area);
  base=(area*2)/altezza;
  printf("valore base=%f",base);

    return 0;
}
