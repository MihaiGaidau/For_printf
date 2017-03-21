#include "ft_printf.h"

char    *ft_return_HEX(void *s, int g2)
{
    char    *var_afis;
    long int w;

    var_afis = (char*)malloc(sizeof(char) * 200);
    w = (g_flags[8] ? (unsigned long)s :(unsigned int)s);
    if (w == 4294967296 && !g_flags[8])
    	var_afis = "0";
    else
    {
    	ft_convertor_max(w, 16, 0, var_afis);
    	ft_strrev(var_afis);
	}
    if (g2)
        var_afis = ft_move_addres(var_afis, 2, 1);
    return(var_afis);
}