#pragma once
#ifndef LIBFT_H
# define LIBFT_H

/*Definimos constantes*/



/*Librerias incluidas*/
#include <string.h>



/*Estructuras que vamos a utilizar*/

/*Funciones que vamos a utilizar*/
void*	ft_memset(void* s, int c, size_t n);
void	ft_bzero(void* s, size_t n);
void*	ft_memcpy(void* dest, const void* src, size_t n);
void*	ft_memccpy(void* dest, const void* src, int c, size_t n);


#endif