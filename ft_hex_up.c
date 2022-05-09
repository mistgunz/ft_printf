#include "ft_printf.h"

int	ft_hex_up(unsigned int n)
{
	int				len;
	char			*base;

	len = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_hex_up(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}
