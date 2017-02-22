#include "ft_printf.h"

int    check_color(char *s)
{
    
    if (ft_Red(s) || ft_Blue(s) || ft_White(s) || ft_Green(s)
     || ft_Magenta(s) || ft_Cyan(s) || ft_Yellow(s))
         return(1);
    return(0);
}