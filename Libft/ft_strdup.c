/*Funcionq ue se encarga de reservar un espacio de memoria y crear una copia de la cadena  "s" que pasamos como argumento.

La reserva de memora se hace con malloc()

REturn value:
    -)Punteor a la posicion de  memoria donde se encuentra la otra cadena
    -)Null si no se ha podido realizar la copia.
*/

#include "libft.h"
char *ft_strdup(const char *s)
{
    size_t len;
    char* ptr;
    len = ft_strlen(s);//Le sumamos luego uno para coger el '/0'
    ptr = (char*)malloc((len + 1) * sizeof(char));
    if (ptr == 0)
        return (0);
    ptr[len + 1] = '\0';
    while (len > 0)
    {
        ptr[len] = s[len];
        len--;
    }
    ptr[len] = s[len];
    return(ptr);
}