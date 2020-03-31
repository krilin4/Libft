#include "libft.h"
#include <stdio.h>

int main(int argc, char argv[])
{
	char* ptr_test;
	char* ptr_salida;
	char* ptr_memset;
	char* ptr_original;
	char letra;
	int tamanio;
	int i;

	printf("Bienvenido al programa principal para testear la funcion ft_memset");
	/*Funcion ft_memset Fer*/
	letra = 'A';
	tamanio = 20;
	ptr_test = malloc(tamanio);
	tamanio = 40; //Ponemos un valor negativo para ver que ocurre
	ptr_salida = (char*)ft_memset(ptr_test, letra, tamanio);

	/*Funcion de Original memset()*/
	i = 0;
	letra = 'A';
	tamanio = 20;
	ptr_original = malloc(tamanio);
	tamanio = 40; //Ponemos un valor negativo para ver que ocurre
	ptr_memset = (char*)memset(ptr_original, letra, tamanio);

	/*Testeo diferencias*/

	while (i< tamanio)
	{
		printf("EL valor de la memset() en la posicion %d es %c \n", i, ptr_memset[i]);
		printf("EL valor de la ft_memset en la posicion %d es %c \n", i, ptr_salida[i]);
		i++;
	}

	/*Liberacion de memoria para evitar fugas*/
	free(ptr_test);
	free(ptr_original);



	printf("Bienvenido al programa principal para testear la funcion bzero");
	ptr_test = malloc(tamanio);
	letra = 'A';
	ptr_salida = (char*)ft_memset(ptr_test, letra, tamanio);
	ft_bzero(ptr_test, tamanio);

	letra = 'B';
	ptr_salida = (char*)ft_memset(ptr_test, letra, tamanio);
	bzero(ptr_test, tamanio);
	return (0);
}
