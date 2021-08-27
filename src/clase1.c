/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	printf("primera clase");

	int numero;
	int numeroDos;
	int suma;
	int resta;

	printf("\nIgrese el numero: \n");
	scanf("%d",&numero);
	printf("\nIgrese el numero: \n");
	scanf("%d",&numeroDos);

	suma = numero + numeroDos;

	printf("\nLa suma del numero es %d", suma);

	if(suma > 17)
	{
		printf("\n sos mayor de edad");
	}

	printf("\nIgrese el numero: \n");
	scanf("%d",&numero);

	printf("\nIgrese el numero: \n");
	scanf("%d",&numeroDos);

	resta = numero - numeroDos;

	printf("\nLa resta es %d", resta);



return EXIT_SUCCESS;
}
