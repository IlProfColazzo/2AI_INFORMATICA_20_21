//Stamerra Ludovico 2 AI
/*
Scrivere un programma che chiede di immettere da tastiera due numeri reali a e b, 
ed un'operazione a scelta fra +, -, *, /, ^ (potenza) e visualizzi il risultato dell'operazione.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    char carr;
    
    printf("Inserisci il segno dell'operazione  \n");
    scanf("%c",&carr);
    printf("Inserisci 2 numeri: \n");
    scanf("%f%f",&a,&b);
    
    switch(carr)
    {
        case '+': 
        printf("%d + %d = %d",a,b,a+b);
        break;
        case '-': 
        printf("%d - %d = %d",a,b,a-b);
        break;
        case '+': 
        printf("%d * %d = %d",a,b,a*b);
        break;
        case '+': 
        printf("%d : %d = %d",a,b,a/b);
        break;
        case '+': 
        printf("%d ^ %d = %d",a,b,pow(a,b));
        break;
    }
    return 0;}


