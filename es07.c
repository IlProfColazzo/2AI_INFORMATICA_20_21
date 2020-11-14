#include <stdio.h>
#include <stdlib.h>
//Alberto Lombardo 2 AI
/*Una sala cinematografica ha 550 posti dei quali 250 in galleria e il resto in platea.
 Sapendo che il biglietto in platea costa 8 € e in galleria 2 € in più, calcolare l’incasso in una sera di tutto esaurito.
*/
int main()
{
    int salaposti=550;
    int galleria=250;
    int platea;
    int bigliettoplatea=8;
    int bigliettogalleria;
    int incassogalleria;
    int incassoplatea;
    int incassototale;


    platea=salaposti-galleria;
    bigliettogalleria=bigliettoplatea+2;
    incassoplatea=platea*bigliettoplatea;
    incassogalleria=galleria*bigliettogalleria;
    incassototale=incassogalleria+incassoplatea;
    return 0;
}


