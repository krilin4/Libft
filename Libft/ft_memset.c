/*Este programa  se encarga de rellenar un conjungo de bytes en memoria
indicados con un valor que le estamos indicando, ademas tiene que tener
esa zona de memoria ya reservada e indicarle el comienzo con un puntero

void *memset(void *s, int c, size_t n);

*S --> Puntero a la posicion de memoria donde empieza
 c  --> Valor que vamos a escribir en cada byte
 n --> Espacio que vamos a escribir
*/


char* ft_memset(char* s, char c, int n)
{
    int i;

    i = 0;
    if (n < 0)
        return (0);
    while (i < n)
    {
        s[i] = c;
        i++;
    }
    return s;
}
