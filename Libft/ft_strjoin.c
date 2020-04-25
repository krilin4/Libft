#include "libft.h"

/*
Parámetros:
 #1. La cadena de caracteres prefijo.
 #2. La cadena de caracteres sufijo.
 
Valor de retorno

 La nueva cadena de caracteres.
 NULL si falla la reserva de memoria. 
 
 unciones externas autorizadas malloc 
 
 Descripción:
 Reserva memoria (con malloc(3)) y devuelve la nueva cadena de caracteres que resulta de la concatenación de ’s1’ y ’s2’.

*/

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1;
    size_t len_s2;
    size_t i;
    char*    ptr;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    if(!(ptr = (char*)malloc((len_s1+len_s2 +1) * sizeof(char))))
        return(NULL);

    i = 0;
    while(i < len_s1)
    {
        ptr[i] = s1[i];
        i++;
    }
    i = 0;
    while(i <= len_s2)
    {
        ptr[len_s1 +i] = s2[i];
        i++;
    }
    return(ptr);
}