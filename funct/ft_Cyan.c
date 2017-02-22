#include "ft_printf.h"

int     ft_Cyan(char *s)
{
    if (ft_strstr(s,"{cyan}"))
     {
        ft_putstr(CYAN);
        return(1);
    }
    return(0);
}