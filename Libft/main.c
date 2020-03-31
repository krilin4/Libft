#include "libft.h"

int main(int argc, char argv[])
{
	char* ptr_test;
	char* ptr_salida;
	char* ptr_memset;
	char* ptr_original;
	char letra;
	int tamanio;

	letra = 'A';
	tamanio = 20;
	ptr_test = malloc(tamanio);
	ptr_salida = ft_memset(ptr_test, letra, tamanio);
	printf("Bienvenido al programa principal para testear la funcion ft_memset");

	letra = 'A';
	tamanio = 20;
	ptr_original = malloc(tamanio);
	tamanio = 40; //Ponemos un valor negativo para ver que ocurre
	ptr_memset = memset(ptr_original, letra, tamanio);
	free(ptr_test);
	free(ptr_original);
	return (0);
}
