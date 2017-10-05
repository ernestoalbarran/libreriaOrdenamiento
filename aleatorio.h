/**
	@version 1.0
	@author Ernesto Rodríguez Albarran
	@date 25/09/17
	@brief En esta librería encontrarás la generación de vectores aleatorios
	*/
#ifndef ALEATORIO_H
#define ALEATORIO_H

//--------------------creacion de vectores con elementos aleatorios----------------------------------------------
/**
	@brief se ingresa una lista y llena la lista con elementos aleatorios
	@param lista Arreglo de elementos, vacia  
	@param size cantidad de numeros a obtener
	@return void
*/
void vector_Aleatorio(int a[],int num);



//--------------------verificacion de memoria dinmica----------------------------------------------
/**
	@brief Esta funcion verifica si existe memoria disponible para ser utilizada y reservada
	@param cantidad de memoria a utilizar
	@return int, retorna 1 si hubo un problema y 0 si la memoria ha sido bien reservada
*/
int reserva_mem(int cantidad);


//--------------------libera memoria dinmica----------------------------------------------
/**
	@brief libera la memoria de un arreglo
	@param arreglo al que se desea limpiar 
	@param tamanio del arreglo
	@return void
*/


//void libera_mem(double arr[], int size);
#endif