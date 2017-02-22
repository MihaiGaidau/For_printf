#include "ft_printf.h"

char    *ft_move_addres(char *s, int t, int b)
{
    int     i;
    int     q;
    char    *new;

    new = (char*)malloc(sizeof(char)*200);
    i = 0;
    q = ( t == 2 ? 2 : 1);
    new[0] = '0';
    if (t == 2)
    {
        new[1] = 'x';
        if (b == 1)
            new[1] = 'X';
    }
    while (s[i] != '\0')
    {
        new[q]  = s[i];
        i++;
        q++;
    }
    new[q] = '\0';
    return(new);
}