
#include "libft.h"

/*Funcion que se encarga de comprobar si es un caracter alfabetico o no.
Devuelve un != 0 si es un caracter alfabetico y 0 sino*/
int ft_isalpha(int c)
{

    if (((c <= 90) && (c >= 65)) ||  ((c <= 122) && (c >= 97)))
        return (1);
    return (0);
}