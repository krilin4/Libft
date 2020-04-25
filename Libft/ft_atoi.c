#include "libft.h"

/*Funcion que se encarga de convertir a numero una cadena de 
caracteres,si se detecta algun caracter que no es numerico se deja de leer.

Salvo en el caso de simbolos + o - al comienzo del array.*/

int ft_atoi(const char *nptr)
{

    size_t i;
    int contador;
    char signo;

    i = 0;
    signo = 1;
    contador = 0;
    //primero contamos los simbolos + y menos
     while(nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' ||
			nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
    {
        i++;
    }
        if (nptr[i] == 45 || nptr[i] == 43)
        {
            if (nptr[i] == 45)
                signo = -1;
            i++;
        }
    while(nptr[i] != '\0' && ((nptr[i] <= 57) && (nptr[i] >= 48)))
    {
        contador = (nptr[i] - 48) + (contador * 10);
        i++;
    }
    return((contador * signo));
}
