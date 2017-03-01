#include "ft_printf.h"

void    ft_convertor_mini(unsigned long long int n, int b, int pos, char *w)
{
    char    *s;
    
    if (n == 0 && pos == 0)
    {
    	w[pos] = '0';
    	pos++;
    }
    if (n == 0)
    {
        w[pos]='\0';
        return ;
    }

    s = "0123456789abcdef";
    w[pos] = s[n % b];
    ft_convertor_mini(n / b, b, pos + 1, w);   
}