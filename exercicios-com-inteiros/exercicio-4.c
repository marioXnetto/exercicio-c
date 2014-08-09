/*
Fatorial
*/

#include <stdio.h>

int main (){

	int num, fat, aux;

	printf ("Informe valor: ");
	scanf ("%d", &num);

	fat = 1;
	aux = num;

	while (num != 0){
		fat = fat * num;
		num--;
	}

	printf ("Fatorial de %d = %d\n", aux, fat);

	return 0;
}