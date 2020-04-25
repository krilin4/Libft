/*Funcion que determina si el caracter corresponde  a la tabla ascii(0-127) o no:

Return value: 
    -)!=0 si es un caracter ascii
    -)0 si no lo es
*/
int ft_isascii(int c)
{
        if (((c <= 127) && (c >= 0)))
            return (1);
        return (0);
}
