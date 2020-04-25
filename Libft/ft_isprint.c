/*Funcion que determina si el caracter es o no printeable

return value:
    -)!= 0 si es printeable
    -)0 si no es printeable
*/
int     ft_isprint(int c)
{
    if (((c <= 126) && (c >= 32)))
        return(1);
    return (0);
}
