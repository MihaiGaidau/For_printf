#include "ft_printf.h"

int	ft_wcharsize(wchar_t chr)
{
	if (chr <= 0x7F)
		return (1);
	else if (chr <= 0x7FF)
		return (2);
	else if (chr <= 0xFFFF)
		return (3);
	else if (chr <= 0x10FFFF)
		return (4);
	return (0);
}

int	ft_fwchar(va_list *parg)
{
	wint_t	wi;

	wi = va_arg(*parg, wint_t);
	return (g_stop ? ft_wcharsize(wi) : ft_putwchar(wi));
}