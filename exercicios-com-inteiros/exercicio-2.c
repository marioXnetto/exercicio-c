#include <stdio.h>

int main(){

	int num, pot, aux, bin, mod;

	printf ("Informe valor decimal: ");
	scanf ("%d", &num);

	aux = num;
	pot = 1;
	bin = 0;

	while (aux > 0){
		mod = aux % 2;
		aux = aux / 2;
		bin = bin + mod * pot;
		pot = pot * 10;
	}

	printf ("Convertido...\n%d = %d\n", num, bin);

	return 0;
}
