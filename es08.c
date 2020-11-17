//Alberto Lombardo 2 AI
/*In un parco divertimenti i biglietti costano 25 € per ogni bambino con età inferiore a 10 anni,
  e 10 € in più per ogni altra persona. Sapendo che i bambini che sono entrati al parco sotto i dieci anni sono 2000,
  calcolare il guadagno del parco divertimenti sapendo che le altre persone sono esattamente il doppio dei bambini.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{


     int bigliettibambino=25;
     int bigliettoadulto=bigliettibambino+10;
     int nbambini=2000;
     int nadulti;
     nadulti=nbambini*2;


     int costobambini=bigliettibambino*nbambini;
     int costoadulti=bigliettoadulto*nadulti;
     int costotot=costobambini+costoadulti;
    return 0;
}
