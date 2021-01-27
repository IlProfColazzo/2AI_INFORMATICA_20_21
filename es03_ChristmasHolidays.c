//Francesco Leone 2 AI
/*Data in input la diagonale di un quadrato,calcoli e stampi a video il perimetro e l’area.Suggerimento:
  la radice quadrata di un numero di calcola utilizzando la funzione sqrt().*/

#include <stdio.h>
#include <stdlib.h>
#define COSTRADICE 2

int main()
{
    float lato,diagonale,perimetro,area;

    printf("Inserire il valore della diagonale:");
    scanf("%f",&diagonale);

    lato=diagonale/sqrt(COSTRADICE);

    perimetro=lato*4;
    area=lato*lato;

    printf("\nIl valore del perimetro e': %.2f\nIl valore dell'area e': %.2f\n\n",perimetro,area);
    system("PAUSE");
    return 0;
}
