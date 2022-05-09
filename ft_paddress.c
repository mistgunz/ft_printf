#include "ft_printf.h"

static int	ft_hex(unsigned long long n)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		len += ft_hex(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_paddress(unsigned long long nbr)
{
	int	len;

	len = 0;
    if(nbr == 0)
    {
        len += ft_putstr("(nil)");
        return(len);
    }
	len += ft_putstr("0x");
	len += ft_hex(nbr);
	return (len);
}