#include "ft_printf.h"

char    *ft_return_hex(void *s, int g2)
{
    char        *var_afis;
    long int    w;

    var_afis = (char*)malloc(sizeof(char) * 200);
    w = (long int)s;
    ft_convertor_mini(w, 16, 0, var_afis);
    ft_strrev(var_afis);
    if (g2)
        var_afis = ft_move_addres(var_afis, 2, 0);
    return(var_afis);
}