#include "ft_printf.h"

char    *ft_return_bin(void *s)
{
    char        *var_afis;
    long int    w;

    var_afis = (char*)malloc(sizeof(char) * 200);
    w = (long int)s;
    ft_convertor_mini(w, 2, 0, var_afis);
    ft_strrev(var_afis);
    return(var_afis);
}