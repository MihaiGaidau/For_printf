#include "ft_printf.h"

void    ft_put_last(char c, int g5, char *s, int index)
{
    if (c == ' ' && g5 == 1)
    {
        if (s[0] == '-')
        {
            ft_putchr('-');
            g_len++;
            index = 1;
        }
        else 
        {
            ft_putchr('+');
            g_len++;
        }
    }
    ft_putstr(&s[index]);
}