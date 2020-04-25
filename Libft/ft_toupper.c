/*Funcion que convierte la letra en mayuscula:

Return value:
    -)parametro de entrada si la letra es mayuscula o nó es un caracter alfbetico en minuscula
    -)Letra en mayuscula si el argumento es un caracter alfabetico en minuscula*/

int ft_toupper(int c)
{
    if((c <= 122) && (c >= 97))
      return (c-32);
    return(c);
}