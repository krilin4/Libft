/*Funcion que determina si el caracter es o nó alfa numerico

return value : 
    != 0 si es alfanumerico
    0 si no es alfanumerico
*/

int ft_isalnum(int c)
{
    if (((c <= 90) && (c >= 65)) ||  ((c <= 122) && (c >= 97)) || ((c <= 57) && (c >= 48)))
        return (1);
    return(0);
}