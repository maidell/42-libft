#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(long int n);
int	ft_putstr(char *str);
int	format(const char *str, va_list type);
int	ft_printf(const char *printer, ...);
int	ft_puthex(unsigned long long number, char flag);

#endif
