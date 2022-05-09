#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		if (nb == -2147483648)
		{
			len += ft_putstr("2147483648");
			return (len);
		}		
		nb *= -1;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}