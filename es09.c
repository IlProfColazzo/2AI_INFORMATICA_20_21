//Alberto Lombardo 2 AI
/*La paga di un operaio è di 15,00 € all’ora. Sulla stessa paga viene effettuata una trattenuta pari al 27%.
 Date il numero delle ore lavorative svolte, calcolare la paga netta.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pagaoperaio=15;
    int imposta=27;
    int orelavorative=24;
    int pagalorda=orelavorative*pagaoperaio;
    float trattenuta=pagalorda*imposta/100;
    int paganetta;
    paganetta=pagalorda-trattenuta;

    return 0;
}
