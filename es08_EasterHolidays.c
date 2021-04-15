//Gaetani Roberto 2 AI
/*
Scrivere un programma che leggendo 4 numeri interi da tastiera, li stampi in senso crescente.
Suggerimento: si consiglia di individuare il maggiore e il minore e successivamente i numeri intermedi.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Dammi 4 numeri: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b&&a>c&&a>d){
        if (b>c&&b>d){
            if(c>d){
                printf("A=%d\nB=%d\nC=%d\nD=%d",a,b,c,d);
            }
            else{
                printf("A=%d\nB=%d\nD=%d\nC=%d",a,b,d,c);
            }
        }
        else if(c>d){
            printf("A=%d\nC=%d\nD=%d\nB=%d",a,c,d,b);
        }
        else{
            printf("A=%d\nD=%d\nC=%d\nB=%d",a,d,c,b);
        }
    }
    else{
            if(b>c&&b>d){
               if(c>d){
                printf("B=%d\nC=%d\nD=%d\nA=%d",b,c,d,a);
               }
               else{
                printf("B=%d\nD=%d\nC=%d\nA=%d",b,d,c,a);
               }
        }
        else {
            if(c>d){
            printf("C=%d\nD=%d\nC=%d\nD=%d",c,d,b,a);
            }
            else{
                printf("D=%d\nC=%d\nB=%d\nA=%d",d,c,b,a);
            }
        }
    }

    return 0;
}
