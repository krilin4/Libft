/*
Funcion que intenta emular el comportamiento de la funcion memcpy original
The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.

void *memcpy(void *dest, const void *src, size_t n);

*/
#include "libft.h"

void* ft_memcpy(void* dest, const void* src, size_t n)
{
	char* ptr_dst;
	char* ptr_src;

	ptr_dst = (char*)dest;
	ptr_src = (char*)src;

	while (n>0)
	{
		ptr_dst[n - 1] = ptr_src[n - 1];
		n--;
	}
	return(dest);
}
