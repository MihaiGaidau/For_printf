#include "ft_printf.h"

void    ft_convertor_max(unsigned long long int n, int b, int pos, char *w)
{
    char    *s;
    
    if (n == 0)
    {
        w[pos]='\0';
        return ;
    }
    s = "0123456789ABCDEF";
    w[pos] = s[n % b];
    ft_convertor_max(n / b, b, pos + 1, w);
}