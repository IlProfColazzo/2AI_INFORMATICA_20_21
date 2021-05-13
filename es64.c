//Gaetani Roberto 2AI

/*Scrivi un programma che legge un numero NUM e stampi a video la relativa tabellina.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Dammi il mumero: ");
    scanf("%d",&n);

    for(i=0;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
