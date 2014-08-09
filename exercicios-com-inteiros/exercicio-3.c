/*
3. Dado um número natural na base binária, transformá-lo para a base decimal.
*/

#include <stdio.h>

int main (){

	int bin, dec, pot, aux;

	printf ("Informe valor binario: ");
	scanf ("%d", &bin);

	aux = bin;
	dec = 0;
	pot = 1;

	while(bin != 0){
		dec = dec + bin % 10 * pot;
		bin = bin / 10;
		pot = pot * 2;
	}

	printf ("Convertido...\n%d = %d\n", aux, dec);

	return 0;
}
