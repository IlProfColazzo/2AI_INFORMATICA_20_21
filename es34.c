// Prof. Colazzo Andrea
/*Il casting esplicito*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var_i = 3;
	float var_f;
	var_f = (float) var_i; //casting esplicito. Non si ha perdita di dati

	int var_a;
	float var_b=9.81;
	var_a = (int) var_b; //casting esplicito. Si ha perdita di dati: var_i cont. il valore 9
    return 0;
}
