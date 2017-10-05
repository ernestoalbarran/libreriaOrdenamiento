#include <stdio.h>
#include "busqueda.h"


//implementacion de la busqueda secuencial en una lista arbitraria

void busqueda_Sec(double a[], double numero, int tamanio)
{
	int i;
	//Recorremos la lista en busqueda del elemento solicitado
	for (i = 0; i < tamanio; ++i)
	{
		if (a[i]==numero)
		{
			printf("Numero encontrado\n");
			break;
		}
		else
			printf("El numero no se encuentra en la lista\n");
	}	

}

//implementacion de la busqueda binaria
void busqueda_bin(double lista[], double numero, int inicial, int final)
{
	int medio;
	double intermedio;
	medio=(inicial+final)/2;
	intermedio=lista[medio];
	if (medio==0)
	{
		printf("Numero no encontrado\n");	
	}
	if (intermedio==numero)
	{
		printf("Numero encontrado\n");
	}
	else
	{
		while(intermedio!=numero)
		{
			if (intermedio<numero)
			{	
				busqueda_bin(lista, numero, inicial, medio-1);
			}
			if(intermedio>numero)
			{
				busqueda_bin(lista,numero, medio, final);
			}

		}
	}
}
