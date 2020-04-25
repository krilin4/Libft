/*
Funcion que intenta emular el comportamiento de memmove();

The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.

*/


#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char array_intermedio[n];
    char* array_src;
    char* array_dest;

    i = 0;
    array_src = (char *)src;
    array_dest = (char *)dest;
    while (i < n)
    {
        array_intermedio[i] = array_src[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        array_dest[i] = array_intermedio[i];
        i++;
    }
    return dest;
}
