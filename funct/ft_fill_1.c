#include "ft_printf.h"

int ft_fill_1(char c, int *q, int *w, int *e)
{
    if (c == '.' || c == '*' || c == '#')
    {
        if (c == '.')
            *q = 1;
        else if (c == '*')
            *w = 1;
        else if (c == '#')
            *e = 1;
        return(1);
    }
    return(0);
}