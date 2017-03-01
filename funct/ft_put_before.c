#include "ft_printf.h"

void    ft_put_before(int i, char c)
{
     while (i > 0)
    {
        ft_putchr(c);
        g_len++;
        i--;
    }
}