//Molle Samuele 2 AI
/*
Un commerciante concede sconti diversi a seconda della quantità di merce acquistata: 
tra i 10 e 20Kg sconto del 3%; tra i 20 e 40Kg il 5%, oltre i 40Kg il 10%.
Scrivere un programma che stampi il prezzo finale di vendita conoscendo quantità e prezzo al Kg.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q;
    float pk, pt, s, pf;

    printf("Inserire la quantita' ");
    scanf("%d",&q);
    printf("Inserire il prezzo al kg ");
    scanf("%f",&pk);

    pt = q * pk;

    if (q>=10 && q<=20){
        s = (pt * 3)/100;
        pf = pt - s;
    }
    else if (q<=40){
        s = (pt * 5)/100;
        pf = pt - s;
    }
    else{
        s = (pt * 10)/100;
        pf = pt - s;
    }

    printf("Prezzo finale = %f euro",pf);
    return 0;
}
