//Tafuri Marta 2 AI
/*
Dato un numero intero tra 1 e 12, che rappresenta il mese corrente, stampare
il nome del mese per esteso (“Gennaio” ... “Dicembre”).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0 ;

    printf("Inserisci un numero intero tra 1 e 12: ") ;
    scanf("%d", &num) ;

    if(num == 1){
        printf("Gennaio\n") ;
    }
    else{
        if(num == 2){
            printf("Febbraio\n") ;
        }
        else{
            if(num == 3){
                printf("Marzo\n") ;
            }
            else{
                if(num == 4){
                    printf("Aprile\n") ;
                }
                else{
                    if(num == 5){
                        printf("Maggio\n") ;
                    }
                    else{
                        if(num == 6){
                            printf("Giugno\n") ;
                        }
                        else{
                            if(num == 7){
                                printf("Luglio\n") ;
                            }
                            else{
                                if(num == 8){
                                    printf("Agosto\n") ;
                                }
                                else{
                                    if(num == 9){
                                        printf("Settembre\n") ;
                                    }
                                    else{
                                        if(num == 10){
                                            printf("Ottobre\n") ;
                                        }
                                        else{
                                            if(num == 11){
                                                printf("Novembre\n") ;
                                            }
                                            else{
                                                if(num == 12){
                                                    printf("Dicembre\n") ;
                                                }
                                            }
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

    return 0;
}
