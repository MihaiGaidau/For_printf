#include "ft_printf.h"

void    ft_fill(char *s, int *a)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		if (!ft_fill_1(s[i], &a[0], &a[3], &a[2]))
			 if (!ft_fill_2(s[i], &a[4], &a[5], &a[6]))
			 {
				if (s[i] == '0')
					a[7] = 1;
				else if (ft_isnbr(s[i]))
				{
					a[1] = ft_atoi(&s[i]);
					while (ft_isnbr(s[i]))
						i++;
					i--;
				}
			 }
		i++;
	}
}