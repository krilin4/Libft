/*Este programa  se encarga de rellenar un conjungo de bytes en memoria
indicados con un valor que le estamos indicando, ademas tiene que tener
esa zona de memoria ya reservada e indicarle el comienzo con un puntero

void *memset(void *s, int c, size_t n);

*S --> Puntero a la posicion de memoria donde empieza
 c  --> Valor que vamos a escribir en cada byte
 n --> Espacio que vamos a escribir
*/
#include "libft.h"

void* ft_memset(void* s, int c, size_t n)
{
    char* ptr;
    int i;

    ptr = (char*)s;//Convertimos el void* a char*

    i = 0;
    if (n < 0)
        return (0);
    while (i < n)
    {
        ptr[i] = (unsigned char)c; //Le hacemos un casting porque en realidad es 1 byte, lo que vamos a ir introduciendo
        i++;
    }
    return (s);
}
