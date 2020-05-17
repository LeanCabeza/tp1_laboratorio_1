/*
 * utn.c
 *
 *  Created on: 7 abr. 2020
 *      Author: Leandro Cabeza
 */

#include <stdio.h>
#include <stdlib.h>

int utn_sumar(float num1 , float num2) {

	float suma = 0;
	suma = num1 + num2;
	printf("\nEl resultado de la suma de %.2f mas %.2f , dio como resultado = %.2f\n",num1,num2,suma);

	return 0 ;
	}

int utn_restar(float num1 , float num2) {

	float resta = 0;
	resta = num1 - num2;
	printf("\nEl resultado de la resta de %.2f menos %.2f , dio como resultado = %.2f\n",num1,num2,resta);

	return 0 ;
	}


int utn_dividir (float num1 , float num2 ){
	int retorno  ;
	float dividir = 0 ;

	if (num2 == 0 )
	{
		printf("\nNo es posible dividir por 0 \n");
				 retorno = -1  ;
	}else{
			dividir = num1 / num2;
			printf("\nEl resultado de la division de %.2f mas %.2f , dio como resultado = %.2f\n",num1,num2,dividir);
				retorno = 0 ;
	}


			return retorno ;
	}


int utn_multiplicar (float num1 , float num2, int* resultado){
	float multiplicacion = 0;
		multiplicacion = num1 + num2;
		printf("\nEl resultado de la multiplicacion de %.2f mas %.2f , dio como resultado = %.2f\n",num1,num2,multiplicacion);
		return 0 ;
		}

int utn_factorial(float num){

	int factorial=1;
	    for(int i=1 ; i<=num ; i++)
	    {
	         factorial= i * factorial;
	    }
	    printf("\nEl factorial de %.2f , dio como resultado = %d\n",num,factorial);
	    return 0;
	}


