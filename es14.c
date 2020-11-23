//Filoni Matteo 2 AI
/*Dato il saldo di un conto corrente in euro, calcolarlo in dollari e in sterline. 
Visualizzare i saldi in output.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int saldoContoCorrenteE=400;
    int saldoContoCorrenteS;
    int saldoContoCorrenteD;
    float valoreSterline = 0.85;
    float valoreDollari = 0.86;

    saldoContoCorrenteS=saldoContoCorrenteE*valoreSterline;
    saldoContoCorrenteD=saldoContoCorrenteE*valoreDollari;

    printf("Saldo in eruro vale %d\nsaldo in sterlie vale %d\nSaldo in dollari vale %d\n",saldoContoCorrenteE,saldoContoCorrenteS,saldoContoCorrenteD);



    return 0;
}
