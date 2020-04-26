/*
Nombre de la función
ft_lstclear 

Prototipo 
void ft_lstclear(t_list **lst, void (*del)(void *);

Parámetros 
#1. La dirección del puntero a un elemento. 
#2. La dirección de la función que permite suprimir el contenido de un elemento. 

Valor de retorno 
None 

Funciones externas autorizadas 
free 

Descripción 
Suprime y libera la memoria del elemento pasado como parámetro y de todos los elementos siguientes, con ’del’ y free (3) 
Por último, el puntero inicial debe pasar a NULL.


La descripción de los campos de la estructura t_list es la siguiente:
• content: El dato contenido en el nodo. El void * permite almacenar un dato de cualquier tipo. 
• next: La dirección del siguiente nodo de la lista o NULL, si se trata del último nodo.

*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list * ptr_lst;

    while(*lst != NULL)
    {
        ptr_lst = *lst;
        (*del)(ptr_lst->content);
        *lst = ptr_lst->next;
        free(ptr_lst);
    }
}