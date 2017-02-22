#include "ft_printf.h"

int     ft_Blue(char *s)
{
    if (ft_strstr(s,"{blue}"))
    {
        ft_putstr(BLUE);
        return(1);
    }
    return(0);
}