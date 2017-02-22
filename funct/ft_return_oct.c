#include "ft_printf.h"

char    *ft_return_oct(void *s, int g2)
{
    char        *var_afis;
    long int    w;

    var_afis = (char*)malloc(sizeof(char) * 200);
    w = (long int)s;
    ft_convertor_mini(w, 8, 0, var_afis);
    ft_strrev(var_afis);
    if (g2)
       var_afis = ft_move_addres(var_afis, 1, 0);
    return(var_afis);
}