#include "ft_printf.h"

int     ft_Red(char *s)
{
    if (ft_strstr(s, "{red}"))
    {
        ft_putstr(RED);
        return(1);
    }
    return(0);
}