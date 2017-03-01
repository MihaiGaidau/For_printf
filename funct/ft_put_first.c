#include "ft_printf.h"

int     ft_put_first(char c, int g5, int *i, char z)
{
    int q;
    int index;

    q = *i;
    index = 0;
    if (c == '0')
    {
        if (g5 == 1)
        {
            ft_putchr('+');
            g_len++;
            q--;
        }
        else if (z == '-') 
        {
            ft_putchr('-');
            g_len++;
            index = 1;
        }
    }
    else if (g5 == 1)
        q--;
    *i = q;
    return(index);
}