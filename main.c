#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "intercambio.h"
#include "aleatorio.h"
#include "busqueda.h"

int main()
{
	int m;

	double num=0.0;
	double list[6]={6.0,8.0,5.0,2.0,4.0,-87.0};
	double lista[10]={0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};	
	/*print(list,5);
	quicksort(list,0,4);
	print(list,5);
	
	print(list,6);
	mergesort(list,0,5);
	print(list,6);*/

	/*printf("Ingresa la cantidad de memoria a reservar\n");
	scanf("%d",&m);

	reserva_mem(m);*/

	printf("Ingresa el numero a buscar\n");
	scanf("%lf", &num);


	printf("Con busqueda secuencial\n");
	busqueda_Sec(list,num, 6);

	printf("busqueda binaria\n");
	busqueda_bin(lista, num, 0, 10);



	return 0;
}