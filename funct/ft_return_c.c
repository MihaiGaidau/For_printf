#include "ft_printf.h"

char    *ft_return_c(long unsigned int n)
{
    char *q;
    
    q = (char*)malloc(sizeof(char) * 200);
    q[0] = (char)n;
    q[1] = '\0';
    if (n == 0)
    	g_len = g_len + 1;
    return(q);
}