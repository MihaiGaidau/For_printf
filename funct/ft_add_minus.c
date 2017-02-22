#include "ft_printf.h"

char    *ft_add_minus(char *s)
{
    char    *w;
    int     i;
    
    w = (char*)malloc(sizeof(char) * 100);
    w[0] = '-';
    i = 0;
    while (s[i] != '\0')
    {
        w[i + 1] = s[i];
        i++;
    }
    w[i + 1] ='\0';
    return(w); 
}