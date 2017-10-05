#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "aleatorio.h"

/**lenamos el vector, en estos momentos solo utilizaremos rand
srand para obtener vectores diferentes en rangos 
entre [-100, 1000]*/

void vector_aleatorio(int a[],int num){
	int i; 
	
	srand(time(NULL));

	for (i = 0; i < num; i++)
	{
		a[i]=(rand()%1000)-100;
	}

}


/**
*Pasamos la cantidad de memoria a ser utilizada y el programa verifica si la memoria ha sido bien reservada
*/
int reserva_mem(int cantidad)
{
	//limpiamos la memoria del puntero
	int *memoria=NULL;

	memoria=(int*)malloc(cantidad*sizeof(cantidad));

	//verificamos que se reservo correctamente la memoria
	if (memoria!=NULL)
	{
		printf("La memoria fue exitosamente reservada\n");
		free(memoria);
		return 0;

	}
	else{
		printf("La asignación de memoria no fue prosible\n");
		return 1;
		exit(EXIT_FAILURE);
	}
}

/**
Esta funcion libera la memoria de un arreglo
lo realiza termino a termino y a todo el arreglo 
*/
/*void libera_mem(double arr[],int size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
		free(arr[i]);
	}
	free(arr);
}*/