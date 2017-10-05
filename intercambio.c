#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "intercambio.h"

//algoritmo de intercambio
void intercambio(int lista[], int size)
{
	// i,j son contadores 
	int i,j, temp;
	// aqui se comienza a ordenar
	for (i = 0; i < size-1; ++i)
	{
		for (j= i+1; j < size; ++j)
		{
			if (lista[i]>lista[j])
			{
				temp=lista[i];
				lista[i]=lista[j];
				lista[j]=temp;
			}
		}
	}

}



//algoritmo de seleccion
void seleccion(int lista[], int size)
{
	//definiendo variables para los ciclos for del algoritmo
	int i, j;
	//definiendo variable temporal para el intercambio.
	int temp, indice_min;
	for (i = 0; i < size-1; ++i)
	{
		//el indice del menor 
		indice_min=i;
		for (j = i+1; j < size; ++j)
		{
			//revisa la lista en busca del menor valor y guarda su indice
			if (lista[i]>lista[j])
			{
				indice_min=j;

			}
						
		}
		//si el indice minimo es diferente al indice del elemento actual
		//se realiza el intercambio
		if (indice_min!=i)
			{
				temp=lista[i];
				lista[i]=lista[indice_min];
				lista[indice_min]=temp;
			
			}
	}
}


//algoritmo de insercion
//algoritmo por inserción bien codificado
void insercion2(int lista[], int size)
{
	//variables para el ciclo for y la variable temporal
	int i,j;
	int temp;

	for (i = 1; i < size; ++i)
	{
		j=i;
		temp=lista[i];
		while(j>0 && temp<lista[j-1])
		{
			lista[j]=lista[j-1];
			j--;
		}
		lista[j]=temp;
	}
}


void burbuja2(int lista[], int size)
{
	int i,j, temp=0;
	int pasada=0;
	while(pasada<size)
	{
		for (i = 0; i < size-1; i++)
		{
			//printf("el valor de i = %d y el valor de j =%d\n",i,i+1 );
			if(lista[i]>lista[i+1]){
				//printf("Esto es lo que hay en la lista\n");
				temp=lista[i];
				//printf("Este es temporal %d\n", temp);
				lista[i]=lista[i+1];
				//printf("Este es el valor i=  %d intercabiando j=%d \n",lista[i],lista[i+1] );
				lista[i+1]=temp;
				//printf("este es el valor intercambiado i=%d y j=%d\n",lista[i],lista[i+1]);
			}
		}
		pasada++;
	}
}



/*void quicksort(double lista[], int inicial, int final)
{
	int i=inicial, j=final;
	double temp;
	int central=(final + inicial)/2;
	double pivote=lista[central];

	do{
		//while (i<pivote && pivote>lista[i])
		while(i<pivote)
		{
			i++;
		}
		//while(j>pivote && pivote<lista[j])
		while(j>pivote)
		{
			j--;
		}

		if (i<=j)
		{
				temp=lista[i];
				lista[i]=lista[j];
				lista[j]=temp;
				i++;
				j--;
		}

	}while (i!=j);

	if (inicial<j)
	{
		quicksort(lista,inicial,j);
	}
	if (final>i)
	{
		quicksort(lista,i,final);
	}
}*/

void quicksort(double lista[], int inicial, int final)
{
	//obtenemos el pivote
	double pivote=lista[inicial];

	//variable temporal para realizar el intercambio
	double temp;

	int izquierda=inicial+1;
	int derecha=final;

	//realizamos por lo menos una pasada 
	do{
		while((izquierda<=derecha)&&(lista[izquierda]<=pivote))
		{
			izquierda++;
		}
		while((izquierda<=derecha)&&(lista[derecha]>pivote))
		{
			derecha--;
		}
		if (izquierda<derecha)
		{
			temp=lista[izquierda];
			lista[izquierda]=lista[derecha];
			lista[derecha]=temp;
			derecha--;
			izquierda++;
		}
	}while(izquierda<=derecha);

	//colocamos el pivote en su sitio
	temp=lista[inicial];
	lista[inicial]=lista[derecha];
	lista[derecha]=temp;
}



//algoritmo mergesort

void mergesort(double lista[], int inicial, int final)
{
	if (inicial<final)
	{
		int mitad=(inicial+final)/2;
		//para evitar desbordamientos mitad=inicial+(final-inicial)/2
		mergesort(lista, inicial, mitad);
		mergesort(lista, mitad+1, final);
		unir(lista, inicial, mitad, final);
	}
}


//funcion que une sublistas
void unir(double lista[], int inicial, int mitad, int final)
{
	int i,j,k;
	int longitud1=mitad-inicial+1;
	int longitud2=final-mitad;
	
	//creamos los arreglos temporales
	int izquierdo[longitud1], derecho[longitud2];

	//copiamos los datos en arreglos temporales

	for(i=0;i<longitud1;i++)
	{
		izquierdo[i]=lista[inicial+i];
	} 
	for (j = 0; j < longitud2; j++)
	{
		derecho[j]=lista[mitad+1+j];
	}

	//unimos los arreglos temporales
	i=0; //indice inicial del primer subarreglo
	j=0; //indice inicial del segundo subarreglo
	k=inicial; //indice inicial del indice unido

	while(i<longitud1 && j<longitud2)
	{
		if (izquierdo[i]<=derecho[j])
		{
			lista[k]=izquierdo[i];
			i++;
		}else
		{
			lista[k]=derecho[j];
			j++;
		}
		k++;
	}

	//copiando los elementos restantes
	//de la sublista izquierda

	while(i<longitud1)
	{
		lista[k]=izquierdo[i];
		i++;
		k++;
	}

	//copiando los elementos restantes
	//de la sublista derecha

	while(j<longitud2)
	{
		lista[k]=derecho[j];
		j++;
		k++;
	}
}





//funcion que imprime una lista 

void print(double lista[], int size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
		printf("%.2f ",lista[i] );
	}
	printf("\n");
}

