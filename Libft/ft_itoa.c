
#include "libft.h"

/*
Nombre de la función
ft_itoa 

Prototipo
char *ft_itoa(int n); 

Parámetros 
#1. El integer que hay que convertir. 

Valor de retorno
La cadena de caracteres que representa al integer. NULL si falla la reserva de memoria. 
 
Funciones externas autorizadas
malloc() 
 
Descripción
 Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres que representa el integer 
 pasado como argumento. Se deben gestionar los números negativos.
*/
char* rellenar_numero (long numero, size_t digitos, char signo)
{
    char *space_numero;

    if(numero == 0)
    {
        if (!(space_numero = (char *)malloc((2) * sizeof(char)))) //1 mas para el \0 del final que no le quiutamos al i
            return (NULL);
        space_numero[0] = 48;
        space_numero[1] = '\0';
        return (space_numero);
    }
    if (!(space_numero = (char *)malloc((digitos + signo + 1) * sizeof(char)))) //1 mas para el \0 del final que no le quiutamos al i
        return (NULL);
    space_numero[digitos + signo] = '\0';
    while (digitos != 0)
    {
        space_numero[digitos + signo -1] = (numero % 10) + 48;
        numero = numero / 10;
        digitos--;
    }
    if (signo == 1)
        space_numero[0] = '-';
    return(space_numero);
}


char *ft_itoa(int n)
{
    size_t i;
    long n_copy;
    char signo;
    char* space_numero;

    signo  = 0;
    if (n < 0)
    {
        signo = 1;
        n_copy = (long)n * (-1);
    }
    else
        n_copy = n;
    i = 0;
    while (n != 0)
    {
        n = n / 10; 
        i++;
    }
    space_numero = rellenar_numero (n_copy, i , signo);
    return (space_numero);
}
