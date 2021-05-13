//Molle Samuele 2 AI
/*
Scrivi un programma che legge in input il valore di due lati (base e altezza) di un quadrilatero, stampi a video:
• un messaggio che indichi se si tratta di un quadrato o di un rettangolo;
• il valore dell’area e del perimetro.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, z, area, p;

    printf("Inserisci il primo lato ");
    scanf("%d",&x);
    printf("Inserisci il secondo lato ");
    scanf("%d",&z);

    area = x * z;
    p = (x * 2) + (z * 2);

    if(x==z){
        printf("Quadrato");
    }
    else{
        printf("Rettangolo");
    }

    printf("\narea= %d, perimetro = %d",area,p);
    return 0;
}
