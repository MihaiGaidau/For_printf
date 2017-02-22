#include "ft_printf.h"

char*    ft_putnbr_uns(unsigned long long int q)
{
    char    *s;
    int     i;

    i = 0;
    s = (char*)malloc(sizeof(char) * 100);
    while (q != 0)
    {
        s[i] = (q % 10)+'0';
        q = q / 10;
        i++;
    } 
    s[i] = '\0';
    ft_strrev(s);
    return(s);
}