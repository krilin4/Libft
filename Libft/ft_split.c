#include "libft.h"

char **llamar_free_tabla_y_sucadenas(char **tabla,size_t i_tabla)
{
    while(i_tabla > 0)
    {
        i_tabla--;
        free(tabla[i_tabla]);
    }
    free(tabla);
    return(NULL);
}


char **fill_rows_with_substr(char** tabla_ptr, char* s, char c)
{
    size_t i;
    size_t inicio;
    size_t i_tabla;

    i = -1;
    inicio = 0;
    i_tabla = -1;
    while(s[++i] != 0)
    {
         if (s[i] == c)
        {
            if (!(tabla_ptr[++i_tabla] = ft_substr(s,inicio,i - inicio )))
                return(llamar_free_tabla_y_sucadenas(tabla_ptr,i_tabla));
            while (s[i + 1] == c)
                i++;
            inicio = i + 1;           
        }
    }
    tabla_ptr[++i_tabla] = ft_substr(s,inicio,i - inicio );
    if (!(tabla_ptr[++i_tabla] = ft_substr(s,inicio,i - inicio )))
        return(llamar_free_tabla_y_sucadenas(tabla_ptr,i_tabla));
    return(tabla_ptr);
}





char **book_memory_table_and_rows(size_t filas_tabla, char* s, char c)
{
    char **tabla_ptr;
    char *ptr;

    if (ft_strlen(s) == 0)
        filas_tabla = 0;
    tabla_ptr = (char **)malloc(sizeof(char*) * filas_tabla + 1 );
    if (tabla_ptr == NULL)
        return (NULL);
    if (filas_tabla == 1 && ft_strlen(s) != 0)
    {
        ptr = ft_strdup(s);
        if (ptr == NULL)
            return (NULL);
        tabla_ptr[0] = ptr;
        tabla_ptr[1] = NULL;
        return (tabla_ptr);
    }
    tabla_ptr = fill_rows_with_substr(tabla_ptr,s,c);
    if (tabla_ptr == NULL)
        return(NULL);
    tabla_ptr[filas_tabla] = NULL; 
    free(s);//OJO LA S_new hay que liberarla cuando terminemos
    return(tabla_ptr);
}





char *funcion_preprara_ft_strim(char *s,char c)
{
    char *s_new;
    char set[2];

    set[0] = c;
    set[1] = '\0';
    s_new = ft_strtrim(s,set); //OJO LA S_new hay que liberarla cuando terminemos
    return (s_new);
}



/*
Funcion que se encarga de separar una cadena pasada en distintas palabras metiendolo en una tabla acabada en NULL, la funcion devuelve NULL si hay algun error con la reserva de memoria

S = QQQMAMAQQQPAPAQQQ
Separador = 'Q'
 ------------------
| Tabla[0] = MAMA  |
| Tabla[1] = PAPÂ  |
| tabla[3] = NULL  |
 ------------------

Return value:

Char** con la direcion en la memoria de la tabla xD

*/

char **ft_split(char const *s, char c)
{
    char **tabla_ptr;
    char *s_new;
    size_t i;
    size_t filas_tabla;

    if (s == NULL)
        return(NULL);
    s_new = funcion_preprara_ft_strim((char*)s, c); //OJO LA S_new hay que liberarla cuando terminemos
    i = -1;
    filas_tabla = 1;
    while(s_new[++i] != '\0')
    {
        if (s_new[i] == c)
        {
            while (s_new[i+1] == c)
                i++;
            filas_tabla++;
        }      
    }  
    tabla_ptr = book_memory_table_and_rows(filas_tabla,s_new,c);//reservamos 1 posicion mas en la tabla para meter NULL al final
    free(s_new);
    return (tabla_ptr);
}
