#include "ft_printf.h"

int ft_get_i(int g1, int g3, char *s)
{
    int i;

    i = (g1 != 0 ? g1 - ft_strlen(s) : 0);
    if (!i)
        i = (g3 != 0 ? g3 - ft_strlen(s) : 0);
    return(i);
}