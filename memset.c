
#include <stdio.h>

void    *memset(void *s, int c, size_t n)
{
    char    *ptr;
    unsigned long   i;

    ptr = (char *)s;
    i = 0;
    while (i < n)
        ptr[i++] = (char)c;
    return (s);
}

/* int main(void)
{
    char    str[10] = "holaa";

    printf("%s", str);
    memset(str, '5', 2);
    printf("%s", str);
} */