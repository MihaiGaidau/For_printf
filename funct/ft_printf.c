#include "ft_printf.h"

#define ST va_list ap; int i = -1; char *flags_data, *var_afis;

int g_flags[20];

void    zero()
{
    int i;
    
    i = 0;
    while (i<20)
    {
        g_flags[i] = 0;
        i++;
    }
}

int     error()
{
    if (g_flags[4] == 1 && g_flags[7] == 1)
    {
        ft_putstr("ERROR!!!");
        return(1);
    }
    if (g_flags[2] == 1 && g_flags[3] == 1)
    {
        ft_putstr("ERROR!!!");
        return(1);
    }
    return(0);
}

void    put_precision(char *s, char *q)
{
    int     i;
    char    c;
    int     t;
    int     index;
    int     color;

    color  = check_color(q);
    if (g_flags[5] == 1 && s[0] == '-')
        g_flags[5] = 0;
    c = (g_flags[7] == 1 ? '0' : ' ');
    t = 0;
    index = 0;
    i = ft_get_i(g_flags[1], g_flags[3], s);
    index = ft_put_first(c, g_flags[5], &i, s[0]);
    ft_put_space(g_flags[6], s[0], &i);
    t =  ft_put_middle(g_flags, c, s, index);
    ft_put_before(i, c);
    if (t == 0)
        ft_put_last(c, g_flags[5], s, index);
    if (color)
        ft_putstr(RESET);
}

int     ft_printf(const char *format, ...)
{
    ST;
    var_afis = (char*)malloc(sizeof(char) * 200);
    va_start(ap, format);
    g_len = 0;
    while (format[++i] != '\0')
    {
        zero();
        if (format[i] == '%')
        {
            flags_data = ft_get_flags_data(&format[i + 1], "%sSpdDioOuUxXcCb\0");
            i += ft_strlen(flags_data);
            ft_fill(flags_data, g_flags);
            g_flags[3] = (g_flags[3] == 1 ? va_arg(ap , int) : 0);
            if (error())
                return (0);
            if (flags_data[ft_strlen(flags_data) - 1] == '%')
            {
                var_afis = "%";
                if (g_flags[6])
                    g_flags[6] = 0;
                put_precision(var_afis,flags_data);
            } else
                var_afis = num_to_base(va_arg(ap, void *), flags_data, g_flags[2]);
            g_len += ft_strlen(var_afis);
        }
        else 
        {
            ft_putchr(format[i]);
            g_len++;
        }
        if (format[i] == '\0')
            return (g_len);
    }
    va_end(ap);
    return(g_len);
}