// Prof. Colazzo Andrea
/*Il casting implicito*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var_i = 3;
	float var_f;
	var_f = var_i; //casting implicito. Non si ha perdita di dati.

	int var_a;
	float var_b=9.81;
	var_a = var_b; //casting implicito. Si ha perdita di dati: var_i conterrà il valore 9
    return 0;
}
