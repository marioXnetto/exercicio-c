/* 
1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados. 
*/

#include <stdio.h>

int main (){

	int num;

	printf ("\n\nInforme valor\n");
	scanf ("%d", &num);

	while (num != 0){
		
		printf ("\nO valor %d ao quadro é = %d\n\n", num, num*num);		

		printf ("Informe valor\n");
		scanf ("%d", &num);
	}

	return 0;
}