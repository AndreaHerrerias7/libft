#include <stdio.h>

int ft_strlen(const char *s)
{
    int counter;

    counter = 0;
    while (*s != '\0')
    {
        counter++;
        s++;
    }
    return (counter);
}

int main(void)
{
    int a = ft_strlen("hola");
    printf("%i", a);
}