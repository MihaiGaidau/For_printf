#include "ft_printf.h"

void ft_put_space(int g6, char c, int *i)
{
    int q;

    q = *i;
    if (g6 != 0 && c != '-')
    {
        ft_putchr(' ');
        q--;
    }
    *i = q;
}