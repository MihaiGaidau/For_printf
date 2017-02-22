#include "ft_printf.h"

int     ft_put_middle(int *a, char c, char *s, int index)
{
    int t;

    t = 0;
    if (a[5] == 1 && c == ' ' && a[4] == 1)
        ft_putchr('+');
    if (a[4] == 1)
    {
        ft_putstr(&s[index]);
        t = 1;
    }
    return(t);
}