/*Funcion que convierte la letra en minuscula:

Return value:
    -)parametro de entrada si la letra es minuscula o nó es un caracter alfbetico en mayuscula
    -)Letra en minuscula si el argumento es un caracter alfabetico en mayuscula*/

int ft_tolower(int c)
{
    if((c <= 90) && (c >= 65))
      return (c+32);
    return(c);
}