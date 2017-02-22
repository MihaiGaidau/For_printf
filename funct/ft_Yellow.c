#include "ft_printf.h"

int     ft_Yellow(char *s)
{
    if (ft_strstr(s,"{yellow}"))
    {
         ft_putstr(YELLOW);
         return(1);
    }
    return(0);
}