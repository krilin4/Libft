/*Suponemos que hay que determinar si en la funcion si es un dígito o no lo que le estamos pasando:

Devolvemos != 0 si es un digito

Devolvemos 0 sino..
*/
int ft_isdigit(int c)
{
  
    if (((c <= 57) && (c >= 48)) )
        return (1);
    return (0);
}
