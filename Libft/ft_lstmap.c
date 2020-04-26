/*Nombre de la función
ft_lstmap 

Prototipo 
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); 

Parámetros 
#1. La dirección del puntero a un elemento. 
#2. La dirección de la función que hay que aplicar en la lista. 
#3. La dirección de la función que hay que aplicar sobre un elemento para borrar ’content’, si es necesario. 

Valor de retorno 
La nueva lista. 
NULL si falla la asignación de memoria. 

Funciones externas autorizadas 
malloc 

Descripción 
Realiza una iteración sobre la lista ’lst’ y aplica la función ’f’ al contenido de cada elemento. 
Crea una nueva lista que resulta de las aplicaciones sucesivas de ’f’. 
Disponemos de la función ’del’ si hay que elminar el contenido de algún elemento.

La descripción de los campos de la estructura t_list es la siguiente:
• content: El dato contenido en el nodo. El void * permite almacenar un dato de cualquier tipo. 
• next: La dirección del siguiente nodo de la lista o NULL, si se trata del último nodo.

*/

#include "libft.h"

void limpiar_lista(t_list * ptr, void (*del)(void *)) 
{
    t_list *ptr_cpy;

    while(ptr)
    {
       (*del)(ptr->content);
        ptr_cpy = ptr->next;
       free(ptr);
       ptr = ptr_cpy;
    }
}





t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{   
    t_list * ptr2_inicio;
    t_list * ptr_copia;

    if(!lst || !(*f))
        return(NULL);
    if (!(ptr_copia = ft_lstnew((*f)(lst->content)))) //Creamos un nuevo elemento con el contenido del primero
        return(NULL);
    ptr2_inicio = ptr_copia;//hacemos una copia que usaremos para no machar el incio por si tenemos que elminiar usando la funcion DEL
    while(lst)
    {
        if (lst->next)
        {
            if (!(ptr_copia->next = ft_lstnew((*f)(lst->next->content))))//Creamos un nuevo elemento con el contenido del elemento siguiente
            {
                limpiar_lista(ptr2_inicio, del);
                return(NULL);
            }
            ptr_copia = ptr_copia->next; 
        }
        lst = lst->next;
    }
   ptr_copia->next = NULL;
   return (ptr2_inicio);
}