/*
Simula la funcion memchr()
The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  
Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.
 */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char byte_to_seek; 
    size_t i;

    ptr = (unsigned char *)s;
    byte_to_seek = (unsigned char)c;
    i = 0;
    while(i < n)
    {
        if(ptr[i] == byte_to_seek)
            return (ptr + i);
        i++; 
    }
    return (0);
}