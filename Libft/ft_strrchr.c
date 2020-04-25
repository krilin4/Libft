#include "libft.h"

/*
Devuelve un puntero de la ultima conincidencia encontrada del byte c en la cadena s

return value:
    -)Devuelve el valor NULL si no se encunetra en la cadena

OJO! El caracter '\0' se considera que forma parte de la cadena.
*/

char *ft_strrchr(const char *s, int c)
{
    int  i;
    char    letra;
    char*   ptr;
    
    letra = (char)c;
    ptr = (char*)s;
    i = (int)ft_strlen(ptr); //Para pillar el '\0'
    while (i >= 0)
    {
        if (s[i] == letra)
            return(ptr+i);
        i--;
    }
    return(0);
}
