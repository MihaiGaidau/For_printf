#include "ft_printf.h"

char    *ft_str_to_n(unsigned long long q)
{
    char    *s;
    int     i;

    s = (char*)malloc(sizeof(char) * 100);
    i = 0;
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