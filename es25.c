//Matteo Filoni 2 AI
/*Calcolare e stampare a video la circonferenza e l’area di un cerchio con raggio r fornito in input. Quale è la costante da definire?*/
#include <stdio.h>
#include <stdlib.h>
#define PIGRECO 3.14
int main()
{
    
    //cfr= 2 * PIGRECO * r
    //A=PIGRECO * r^2
    float raggio;
    float area;
    float cfr;
    printf("dammi il raggio ");
    scanf("%f",&raggio);
    area=PIGRECO*raggio*raggio;
    cfr=2*PIGRECO*raggio;
    printf("l'area del cerchio vale %f\nLa circonferenza vale %f",area,cfr);

    return 0;
}
