#include "ft_printf.h"

int	ft_hex_low(unsigned int n)
{
	char			*base;
	int				len;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		len += ft_hex_low(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}
