#include "ft_printf.h"

int     ft_Magenta(char *s)
{
    if (ft_strstr(s,"{magenta}"))
    {
        ft_putstr(MAGENTA);
        return(1);
    }
    return(0);
}