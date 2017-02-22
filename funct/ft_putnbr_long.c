#include "ft_printf.h"

char    *ft_putnbr_long(long long int n)
{
    unsigned long long  q;
    char                *s;
    int                 h;

    s = (char*)malloc(sizeof(char) * 100);
    if (n == 0)
    {
        s = "0\0";
        return(s);
    }
    if (n < 0)
    {
        h = 1;
        q = -n;
        
    } else 
        q = n;
    s = ft_str_to_n(q);
    if (h == 1)
        s = ft_add_minus(s);
    return(s);
}