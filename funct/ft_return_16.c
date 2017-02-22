#include "ft_printf.h"

char    *ft_return_16(void *s, char c, int g2)
{
    if (c == 'X')
        return(ft_return_HEX(s, g2));
    if (c == 'x')
        return(ft_return_hex(s, g2));
    return(ft_return_hex(s, 1));
}