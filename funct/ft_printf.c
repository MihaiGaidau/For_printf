#include "ft_printf.h"

#define ST va_list ap; int i = -1; char *flags_data, *var_afis;

int g_flags[20];
int g_len;

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
            flags_data = ft_get_flags_data(&format[i + 1], "sSpdDioOuUxXcCb");
            i +=ft_strlen(flags_data);
            ft_fill(flags_data, g_flags);
            g_flags[3] = (g_flags[3] == 1 ? va_arg(ap , int) : 0);
            if (error(flags_data))
                return (0);
            var_afis = num_to_base(va_arg(ap, void *), flags_data, g_flags[2]);
            g_len += ft_strlen(var_afis);
        }
        else ft_putchr(format[i]);
        if (format[i] == '\0')
            return (g_len);
        g_len++;
    }
    va_end(ap);
    return(g_len);
}

// int main(void)
// {    
//     // ft_printf("%+05{red}d\n",20);

//     ft_printf("mihai bea%+05{red}d%{yellow}s ",20, "grisa");
//     ft_printf("\nmihai %*+i\n",20,-2);
//     //printf("\n%x",-2);
//     //   char *g;
//     //    g=(char*)malloc(sizeof(char)*45);
//     //  int n = 10;
//     // unsigned int q;
//    /// puts("go");
//     // q = ((n > 0) ? n : MAX_UNS_INT + n + 1);
//    // printf("q=%i",q);
//   // ft_putstr(RESET);
//  //printf("%lld",-1234);
// //   ft_convertor(n, 0, 8, 0, g); 
// //   ft_strrev(g);
// //    puts(g);
// //ft_printf("%b\n",10);
// //  ft_printf("%#x\n",10);
//  //ft_printf("mihai:%+{yellow}*dvasea:%*{red}Xghena\n%p\nbinary: %dsdbacu\n", 10, -12345, 5, 123, 10,10);
//    // printf("\n");
//    // printf("%+*d\n",10,1234);
// //     printf("neghex: %x\n",123);
// // ft_printf("%p\n","misa");
// //      printf("%p\n","misa");
//     //  ft_printf("string: %sd\ninteger: %i\nchar %c\nHEXA: %X\nhexa: %x\noctal: %o\naddress: %p ",g,-300,'q',-2,-2,-2,"mihai");
//  //   ft_printf("\n----------------\n");
//     // printf("string: %sd\ninteger: %i\nchar %c\nHEXA: %X\nhexa: %x\noctal: %o\naddress: %p ",g,-300,'q',-2,-2,-2,"mihai");
//     // printf("\n%-4s\n","vas");
//     // printf("%- 10dvaea\n",12);  
//     // printf("hex_original_printf:%-19Xv\n",-2);
//     // printf("%#22o\n",-1234);
//     // ft_convertor(q, 1, 16);
//     // printf("\n");
    
//     return(0);
// }
///printf("%05d",3);  00003
///printf("%5d",3);       5
///printf("%5s","vas"); --vas
///printf("%-10d\n",12);
///printf("%-#10x\n",1234);
//printf("%#x\n",1234);
//invers +1;
//hh -signed char(d/i) unsigned char(ouxX)
//h short int/ usigned short int;
//l long int/ unsigned lung int;

//   q = ((n > 0) ? n : MAX_UNS_INT - n + 1);