#include "ft_printf.h"

int     ft_White(char *s)
{
    if (ft_strstr(s,"{white}"))
    {
        ft_putstr(RESET);
        return(1);
    }
    return(0);
}