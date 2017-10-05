/**
	@version 1.0
	@author Ernesto Rodríguez Albarran
	@date 18/09/17
	@brief Esta es una libreria en c en la cual se han codificado los algoritmos de ordenamiento 
	más utilizados, ordenamiento por selección, intercambio, burbuja, quicksort, shellsort.
*/
#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

//--------------------ordenacion por intercambio----------------------------------------------
/**
	@brief Dada una lista arbitraria, ordena de forma ascendente
	utilizando el algoritmo de ordenamiento
	@param lista Arreglo de elementos 
	@param size tamaño de la lista
	@return void
*/
void intercambio(int lista[], int size);

//-------------------------Ordenacion por seleccion-------------------------------------------

/**
	@brief Dada una lista devuelve una lista ordenada utilizando el algoritmo de seleccion.
	@param lista de elementos 
	@param tamaño de la lista
	@return void
*/
void seleccion(int lista[],int size);

//----------------------------------ordenacion por Insercion----------------------------------
/**
	@brief Dada una lista devuelve una lista ordenada utilizando el algoritmo de insercion.
	@param lista de elementos a imprimir
	@param tamaño de la lista
	@return void
*/
void insercion(int lista[], int size);

//-----------------------------------ordenacion por insercion segunda version------------------
/**
	@brief Dada una lista devuelve una lista ordenada utilizando el algoritmo de insercion
	haciendo un recorrido de los elementos de la lista.
	@param lista de elementos a imprimir
	@param tamaño de la lista
	@return void
*/

void insercion2(int lista[], int size);


//-------------------------Ordenacion por burbuja-------------------------------------------
/**
	@brief Dada una lista devuelve una lista ordenada utilizando el algoritmo de burbuja.
	@param lista de elementos 
	@param tamaño de la lista
	@return void
*/


void burbuja(int lista[], int size);

//-------------------------Ordenacion quicksort-------------------------------------------
/**
	@brief Dada una lista devuelve una lista ordenada utilizando el algoritmo quicksort.
	@param lista de elementos 
	@param tamaño de la lista
	@return void
*/

void quicksort(double lista[], int inicial, int final);

/**
	@brief prototipo del metodo de ordenamiento mergesort
	@param lista de elementos a ordenar
	@param indice inicial e indice final
*/
void mergesort(double lista[], int inicial, int final);

//union para el mergesort
void unir(double lista[], int inicial, int mitad, int final);



/**
	@brief funcion que imprime los elementos de una lista
	@param lista de elementos a imprimir
	@param tamaño de la lista
*/
void print(double lista[], int size);
#endif