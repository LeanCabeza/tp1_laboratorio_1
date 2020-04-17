/*
 ============================================================================
 Name        : Tp1.c
 Author      : LeandroCabeza
 Version     :
 Copyright   : Your copyright notice
 Description : TP1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {
	setbuf(stdout, NULL);

	float num1=0;
	float num2=0;


	printf("Ingrese el primer numero con el que desea Operar");
		scanf("%f",&num1);
	printf("Ingrese el segundo numero con el que desea Operar");
			scanf("%f",&num2);

	utn_sumar( num1, num2);
	utn_restar( num1, num2);
	utn_dividir( num1, num2);
	utn_multiplicar( num1, num2);
	utn_factorial( num1);
	utn_factorial( num2);


	return 0 ;
}
