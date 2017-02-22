#include "ft_printf.h"

void    ft_putchr(char c)
{
    write(1, &c, 1);
}