/*Funcion propia que trata de emular el comportamiento de la funcion memccpy de
la libreria string.h en C.

 The memccpy() function copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found.
If the memory areas overlap, the results are undefined.

void* memccpy(void* dest, const void* src, int c, size_t n)

*/
#include "libft.h"

void* ft_memccpy(void* dest, const void* src, int c, size_t n)
{
    char* ptr_dst;
    char* ptr_src;
    unsigned char flag;
    size_t i; //que coga el mismo valor dependiendo dle sistema operativo

    ptr_src = (char*)src;
    ptr_dst = (char*)dest;
    flag = (unsigned char)c;
    i = 0;
    while(i < n)
    {
        ptr_dst[i] = ptr_src[i];
        if (ptr_src[i] == flag)
            return (ptr_dst + i + 1);
        i++;
    }
    return (0);
}