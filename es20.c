//Molle Samuele 2 AI
/*Svolgere l'esercizio 7. facendo in modo che tutti i dati vengano forniti in input (da tastiera) dall’utente e i risultati
vengano visualizzati in output (sullo schermo)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int posti;
    int galleria;
    int platea;
    int galleria_1p;
    int platea_1p;
    int incasso_galleria;
    int incasso_platea;
    int incasso;
    printf("Inserire il numero di posti =");
    scanf("%d",&posti);
    printf("Inserire il numero di posti in galleria =");
    scanf("%d",&galleria);
    printf("Inserire il prezzo di un biglietto in platea =");
    scanf("%d",&platea_1p);

    platea = posti - galleria;
    platea_1p = galleria_1p + 2;
    incasso_galleria = galleria * galleria_1p;
    incasso_platea = platea * platea_1p;
    incasso = incasso_galleria + incasso_platea;

    printf("L'incasso della sala e' %d",incasso);
}
