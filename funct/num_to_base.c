#include "ft_printf.h"

char*    num_to_base(void *s, char *flags_data, int g2)
{
    char c;
    char *raspuns;

    c = flags_data[ft_strlen(flags_data) - 1];
     raspuns = (char*)malloc(sizeof(char) * 200);
    if (c == 's')
        raspuns = ft_return_s(s);
    else if (c == 'c')
        raspuns = ft_return_c((long unsigned int)s);
    else if (c == 'd' || c == 'i' || c == 'u' || c == 'U')
        raspuns = ft_return_int(s, flags_data);
    else if (c == 'X' || c == 'x' || c == 'p')
        raspuns = ft_return_16(s, c, g2);
    else if (c == 'O' || c == 'o')
        raspuns = ft_return_oct(s, g2);
    else if (c == 'b')
        raspuns = ft_return_bin(s);
    put_precision(raspuns, flags_data);
    return(raspuns);
}