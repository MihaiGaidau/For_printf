#include "ft_printf.h"
#define FT_WSTRLEN(WS) (int)ft_strlen((char *)WS)

int	ft_fwstr(va_list *parg)
{
	wchar_t		*ws;

	if ((ws = va_arg(*parg, wchar_t *)))
		return (g_stop ? FT_WSTRLEN(ws) : ft_putwstr(ws));
	return (g_stop ? 6 : (int)ft_strlen("(null)"));
}