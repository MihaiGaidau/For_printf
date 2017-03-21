#include "ft_printf.h"

#define GL unsigned int q; long long int w; char *var_afis; char c;

char    *ft_return_int(void *s, char *flags_data)
{
	GL;
	c = flags_data[ft_strlen(flags_data) - 1];
	var_afis = (char*)malloc(sizeof(char) * 200);
	if (ft_strstr(flags_data, "ul") || c == 'U' || c == 'u')
	{
		q = *(unsigned int*)s;
		var_afis = ft_putnbr_uns(q);
		return(var_afis);
	} 
	if (ft_strstr(flags_data, "lld"))
		w = (long long int)s;
	else if (ft_strstr(flags_data, "ld"))
		w = (long int)s;
	else 
	{
		w = (long int)s;
		if (w > 2147483647)
			w = w - MAX_UNS_INT - 1;
	}
	var_afis = ft_putnbr_long(w);
	return(var_afis);
}