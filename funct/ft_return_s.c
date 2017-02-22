#include "ft_printf.h"

char    *ft_return_s(void *s)
{
    char *q;
    
    q = (char*)malloc(sizeof(char) * 200);
    q = (char*)s;
    return(q);
}