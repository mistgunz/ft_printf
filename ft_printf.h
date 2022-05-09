#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putnbr(int nbr);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_hex_low(unsigned int n);
int	ft_hex_up(unsigned int nbr);
int	ft_paddress(unsigned long long nbr);
int	ft_putstr(char *str);

#endif