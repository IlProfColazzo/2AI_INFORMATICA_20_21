//Fabbiano Lorenzo 2 AI
/*Determinare e visualizzare il numero precedente e successivo di un numero intero.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nintero=6;
    int nprecedente=0;
    int nsuccessivo=0;
    nprecedente=nintero-1;
    nsuccessivo=nintero+1;
    printf("numero precendente=%d\n",nprecedente);
    printf("numero successivo=%d\n",nsuccessivo);

    return 0;
}
