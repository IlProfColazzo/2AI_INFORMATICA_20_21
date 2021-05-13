//Prof. Colazzo Andrea
/*
Si scriva un programma in linguaggio C che implementi una semplice
calcolatrice in grado di compiere le 6 operazioni (+ – * / % ^) tra numeri interi.
Il programma chiede all’utente di inserire il carattere rappresentante
l’operazione da svolgere e in seguito i due operandi.
Il programma stamperà a video il risultato dell’operazione.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char operazione;
	int operando1, operando2;

    printf("Inserisci l'operazione da svolgere: ");
    scanf("%c",&operazione);
	printf("Inserisci il primo operando: ");
    scanf("%d",&operando1);
	printf("Inserisci il secondo operando: ");
    scanf("%d",&operando2);

    switch(operazione){
    case '+':
        printf("%d %c %d = %d",operando1,operazione,operando2,operando1+operando2);
        break;
    case '-':
        printf("%d %c %d = %d",operando1,operazione,operando2,operando1-operando2);
        break;
    case '*':
        printf("%d %c %d = %d",operando1,operazione,operando2,operando1*operando2);
        break;
    case '/':
        printf("%d %c %d = %d",operando1,operazione,operando2,operando1/operando2);
        break;
	case '%':
		printf("%d %c %d = %d",operando1,operazione,operando2,operando1%operando2);
		break;
    case '^':
        printf("%d %c %d = %.2f",operando1,operazione,operando2,pow(operando1,operando2));
        break;
    default:
        printf("Operazione sconosciuta");
        break;
    }

    return 0;
}
