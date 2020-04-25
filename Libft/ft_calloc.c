
#include "libft.h"

/*
Funcion que se encarga de inicializar a 0 un espacion de memoria donde:
 el primer parámetro es el nº de elementos y a continuación el tamaño del elemento .

return value:
    -)Puntero a la reserva de memoria hecha
    -)Null si nmemb o size es 0*/
void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i;
    char* ptr;

    i = 0;
    if (nmemb == 0 || size == 0)
        return (0);
    else 
        {
            ptr = (char *)malloc(nmemb * size);
            if (ptr == 0)
                return (0); //protegemos el malloc()
            else
            while( i < nmemb * size)
            {
                ptr[i] = 0;
                i++;
            }
        }
    return (void*)ptr;
}