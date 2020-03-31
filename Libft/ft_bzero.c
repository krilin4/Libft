/*The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeroes (bytes con‐
       taining '\0') to that area.
       void bzero(void *s, size_t n);
*/

#include "libft.h"

void ft_bzero(void* s, size_t n) 
{
    while (n > 0)
    {
        char* ptr;
        ptr = (char*)s;
        ptr[n - 1] = '\0'; 
        n--;
    }
}