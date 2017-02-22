#include "ft_printf.h"

int     ft_Green(char *s)
{
    if (ft_strstr(s, "{green}"))
    {
        ft_putstr(GREEN);
        return(1);
    }
    return(0);
}