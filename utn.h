/*
 * utn.h
 *
 *  Created on: 7 abr. 2020
 *      Author: Leandro Cabeza
 */

#ifndef UTN_H_
#define UTN_H_

/**
 * \brief Suma dos numeros ingresados por parametro y imprime el resultado en pantalla
 * \param Dos numeros para ser sumados
 * \return retorna 0 una vez que la operacion fue realizada
 *
 */
	int utn_sumar (float num1 , float num2 );
/**
 * \brief Resta dos numeros ingresados por parametro y imprime el resultado en pantalla
 * \param Dos numeros para ser sumados
 * \return retorna 0 una vez que la operacion fue realizada
 *
 */
	int utn_restar (float num1 , float num2);
/**
 * \brief Dividide dos numeros ingresados por parametro y imprime el resultado en pantalla
 * \param Dos numeros para ser divididos
 * \return retorna 0 una vez que la operacion fue realizada y -1 en caso de que no haya sido posible realizar la operacion
 *
 */
	int utn_dividir ( float num1 , float num2);
/**
 * \brief Multiplica dos numeros ingresados por parametro y imprime el resultado en pantalla
 * \param Dos numeros para ser multiplicados
 * \return retorna 0 una vez que la operacion fue realizada
 *
 */
	int utn_multiplicar (float num1 , float num2);
/**
 * \brief Imprime en pantalla el factorial de un numero
 * \param un numero
 * \return retorna 0 una vez que la operacion fue realizada
 *
 */
	int utn_factorial (float num);


#endif /* UTN_H_ */
