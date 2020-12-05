//Roberto Gaetani 2 AI
/*Svolgere l'esercizio 9. facendo in modo che tutti i dati vengano forniti in input (da tastiera) dall’utente e i risultati
vengano visualizzati in output (sullo schermo)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pagaOperaio;
    float percentualeTrattenuta;
    float trattEuro;
    float pagaTrattenuta;
    float pagaGiornaliera;

    printf("Paga dell'operaio:");
    scanf("%f",&pagaOperaio);
    printf("Percetuale trattenuta:");
    scanf("%f",&percentualeTrattenuta);

    trattEuro=(pagaOperaio*percentualeTrattenuta)/100;
    pagaTrattenuta=pagaOperaio-trattEuro;
    pagaGiornaliera=pagaTrattenuta*8;

    printf("Trattenuta in Euro:%f",trattEuro);
    printf("\nPaga trattenuta:%f",pagaTrattenuta);
    printf("\nPaga giornaliera:%f",pagaGiornaliera);
    return 0;
}
