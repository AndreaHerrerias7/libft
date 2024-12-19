#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Libera memoria en caso de error
static void    ft_setfree(char **str, int i)
{
    while (i >= 0)
        free(str[i--]);
    free(str);
}

size_t    ft_strlen(const char *str)
{
    size_t    i;

    i = 0;
    while (*str != '\0')
    {
        str++;
        i++;
    }
    return (i);
}

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t    i;
    char    *temp;

    i = 0;
    temp = dest;
    if (!dest && !src)
        return (0);
    while (i < n)
    {
        temp[i] = ((const char *)src)[i];
        i++;
    }
    return (dest);
}

char    *ft_substr(char const *s, int unsigned start, size_t len)
{
    char    *str;

    if (start > ft_strlen(s))
    {
        str = (char *)malloc(1);
        if (str == NULL)
            return (NULL);
        str[0] = '\0';
        return (str);
    }
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    str = (char *)malloc(len + 1);
    if (str == NULL)
        return (NULL);
    ft_memcpy(str, s + start, len);
    str[len] = '\0';
    return (str);
}

// Cuenta las palabras en la cadena separadas por el delimitador
static int    ft_counter(const char *s, char c)
{
    int    count;
    int    in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

// Extrae una palabra de la cadena y avanza el puntero original
static char    *ft_extractword(const char **s, char c)
{
    const char    *start;
    int            len;

    while (**s == c) // Salta delimitadores iniciales
        (*s)++;
    start = *s; // Marca el inicio de la palabra
    while (**s != c && **s != '\0') // Encuentra el final de la palabra
        (*s)++;
    len = *s - start; // Calcula la longitud de la palabra
    return (ft_substr(start, 0, len)); // Crea la subcadena con ft_substr
}

// Divide la cadena en palabras
char    **ft_split(const char *s, char c)
{
    int        i;
    int        count;
    char    **str;

    if (!s)
        return (NULL);
    count = ft_counter(s, c);
    str = malloc((count + 1) * sizeof(char *));
    if (!str)
        return (NULL);
    i = 0;
    while (i < count)
    {
        str[i] = ft_extractword(&s, c);
        if (!str[i]) // En caso de error al crear una palabra
        {
            ft_setfree(str, i - 1);
            return (NULL);
        }
        i++;
    }
    str[i] = NULL; // Finaliza con un puntero nulo
    return (str);
}

int main()
{
    char **res = ft_split(",,hello,,world,,", ',');
    for (int i = 0; res[i] != NULL; i++)
        printf("Word %d: %s\n", i + 1, res[i]);
    // Liberar memoria al final
    for (int i = 0; res[i] != NULL; i++)
        free(res[i]);
    free(res);
    return 0;
}