/**
	@version 1.0
	@author Ernesto Rodríguez Albarran
	@date 25/09/17
	@brief En esta librería encontrarás funciones de busqueda, secuencial y binaria
	*/
#ifndef BUSQUEDA_H
#define BUSQUEDA_H

//--------------------busqueda secuencial----------------------------------------------
/**
	@brief Como su nombre lo indica, revisa elemento a elemento hasta encontrar el solicitado
	@param Lista de elementos, 
	@param elemento a buscar
	@param tamanio de la lista
	@return void
*/
void busqueda_Sec(double a[], double numero, int tamanio);

//--------------------busqueda binaria----------------------------------------------
/**
	@brief realiza la busqueda en una lista ordenada hasta encontrar el solicitado
	@param Lista de elementos ordenada 
	@param elemento a buscar
	@param tamanio
	@return void
*/
void busqueda_bin(double lista[], double numero, int inicio, int final);


#endif