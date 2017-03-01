#include "ft_printf.h"

char    *ft_get_flags_data(char const *format, char *all_flags)
{
    char    *flags_data;
    int     t;
    int     i;
    int     j;
    
    t = 0;
    i = 0;
    j = 0; 
    flags_data = (char*)malloc(sizeof(char) * 20);
    // if (format[0] == '%')
    // {
    //     flags_data = "%\0";
    //     ft_putchr('%');
    //     return(flags_data);
    // }
    // if (format[0] != '{' && !ft_strchr(all_flags, format[0]) &&
    //  !ft_strchr(" 0+-*#", format[0]) && !ft_isnbr(format[0]))
    // {
    //     flags_data[0] = format[0];
    //     flags_data[1] = '\0';
    //     return(flags_data);
    // }
    while ((!(ft_strchr(all_flags, format[i]))) || t != 0)
    {
        if (format[i] == '{')
            t++;
        if (format[i] == '}')
            t--;
        flags_data[j] = format[i];
        i++;
        j++;
    }
    flags_data[j] = format[i];
    flags_data[j + 1] = '\0';
    return(flags_data);
}