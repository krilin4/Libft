/*
Nombre de la función
ft_lstnew 

Prototipo 
t_list *ft_lstnew(void *content);

Parámetros 
#1. El contenido del nuevo elemento. 

Valor de retorno 
El elemento nuevo 

Funciones externas autorizadas
malloc 

Descripción 
Reserva memoria (con malloc(3)) y devuelve un nuevo elemento.
La variable ’content’ se inicializa mediante el valor del parámetro ’content’. La variable ’next’ se inicializa con NULL.


La descripción de los campos de la estructura t_list es la siguiente:
• content: El dato contenido en el nodo. El void * permite almacenar un dato de cualquier tipo. 
• next: La dirección del siguiente nodo de la lista o NULL, si se trata del último nodo.
*/

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *elemento;
    elemento = malloc(sizeof(t_list));//reservamos espacio en el heap y ahi tenemos nuestro puntero a nuestra lista

    elemento->content = content;
    elemento->next = NULL;

    return (elemento);
}
