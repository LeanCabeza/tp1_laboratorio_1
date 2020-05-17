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
	char respuesta ;
	int opcion;
	float num1=0;
	float num2=0;

	do{
	printf("Ingrese el primer numero con el que desea Operar");
	scanf("%f", &num1);
	printf("Ingrese el segundo numero con el que desea Operar");
	scanf("%f", &num2);

	printf("\nQue operacion desea Realizar ?\n"
			"\n 1-Suma \n"
			"\n 2-Resta \n"
			"\n 3-Division \n"
			"\n 4-Multiplicacion \n"
			"\n 5-Factorial \n"
	);

	scanf("%d",&opcion);

	switch(opcion)
			{
				case 1:
					utn_sumar( num1,num2);
					break;
				case 2:
					utn_restar( num1 , num2) ;
					break;
				case 3:
					 utn_dividir ( num1 , num2 );
					break;
				case 4:
					utn_multiplicar(num1 ,num2);
					break;
				case 5:
					utn_factorial(num1);
					utn_factorial(num2);
					break;
				default:
					printf("ERROR: No ingresaste una operacion valida!\n");
					break;
			}
			fflush(stdin);
			printf("Deseas realizar otra operacion?(s/n)\n");
			scanf("%c", &respuesta);
		}while(respuesta == 's');

		return 0;
	}


