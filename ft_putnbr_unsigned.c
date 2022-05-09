#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int				len;

	len = 0;
	if (nbr >= 10)
		len += ft_putnbr_unsigned(nbr / 10);
	len += ft_putchar(nbr % 10 + '0');
	return (len);
}