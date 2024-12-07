#include <stdio.h>

int ft_isalnum(int c)
{
    int res;

    res = 0;
    if (c >= '0' && c <= '9' || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        res = 1;
    
    return res;
}

/* int main(void)
{
    int res = ft_isalnum('a');
    printf("%i", res);
} */