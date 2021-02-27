//D'Amico Davide 2AI

/*Scrivi un programma che legge tre numeri interi e successivamente 
esegue la divisione in tutte le possibili combinazioni,
e visualizza in modo ordinato e formattato i risultati sullo schermo. 
In questa versione utilizzare solo variabili intere.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numint1=0, numint2=0, numint3=0;
    int divis1=0,divis2=0,divis3=0,divis4=0,divis5=0,divis6=0,divis7=0,divis8=0,divis9=0;
    printf("Inserire primo numero intero: ");
    scanf("%d",&numint1);
    printf("Inserire secondo numero intero: ");
    scanf("%d",&numint2);
    printf("Inserire terzo numero intero: ");
    scanf("%d",&numint3);
    divis1=numint1/numint1;
    divis2=numint1/numint2;
    divis3=numint1/numint3;
    divis4=numint2/numint1;
    divis5=numint2/numint2;
    divis6=numint2/numint3;
    divis7=numint3/numint1;
    divis8=numint3/numint2;
    divis9=numint3/numint3;
    printf("%d/%d=%d\n",numint1,numint1,divis1);
    printf("%d/%d=%d\n",numint1,numint2,divis2);
    printf("%d/%d=%d\n",numint1,numint3,divis3);
    printf("%d/%d=%d\n",numint2,numint1,divis4);
    printf("%d/%d=%d\n",numint2,numint2,divis5);
    printf("%d/%d=%d\n",numint2,numint3,divis6);
    printf("%d/%d=%d\n",numint3,numint1,divis7);
    printf("%d/%d=%d\n",numint3,numint2,divis8);
    printf("%d/%d=%d\n",numint3,numint3,divis9);
    return 0;
}
