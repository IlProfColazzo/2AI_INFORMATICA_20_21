//Lombardo Alberto 2AI

/*Scrivi un programma che legge un numero NUM 
e visualizza tutti i numeri pari inferiori a tale numero.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,i;

	printf("dammi il numero: ");
	scanf("%d",&num);

	for(i=num-1;i>=0;i--){
		if (i%2==0){
			printf("il risultato e': %d\n",i);
		}
	}
    return 0;
}
