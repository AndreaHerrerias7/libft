#include <stdio.h>

int ft_isascii(int c)
{
    int res;

    res = 0;
    if (c >= 0 && c <= 127)
        res = 1;
    return (res);
}

/* int main(void)
{
    int res = ft_isascii('d');
    printf("%i", res);
} */