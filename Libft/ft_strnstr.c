
#include "libft.h"
/*
 * Busca la primera ocurrencia de la cadena "find" en "s", donde la búsqueda esta limitada  a los primero slen caracteres 
 * de "s"
 */
char * ft_strnstr(const char *s, const char *find, size_t slen)
{
    size_t i;
    size_t len_substr;
    size_t j;
    char* ptr;
    
    ptr = (char*)s;
    i = 0;
    len_substr = ft_strlen(find); //tamanio find
    if (find[i] == 0)
		return (ptr);
    while(s[i] != '\0' && i < slen)
    {
        if(s[i] == find[0])
        {
            j = 1;
            while (find[j] == s[i+j])
            {
                j++;
            }
            if (j == len_substr && (i + j < slen))
                return(ptr + i);
        }
        i++;
    }
    return (0);
}