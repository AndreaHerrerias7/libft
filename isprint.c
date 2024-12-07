#include <stdio.h>

int ft_isprint(int c)
{
    int res;

    res = 0;
    if (c >= 32 && c <= 126)
        res = 1;
    return (res);
}

/* int main(void)
{
    int res = ft_isprint('d');
    printf("%i", res);
} */