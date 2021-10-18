#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// void ft_putchar(char c);
// void ft_putstr(char *str);
// void ft_putnbr(int nb);
// int ft_atoi(char *str);
void ft_putnbr_base(int nbr, char *base);
int ft_atoi_base(char *str, char *base);

int main()
{
	// ft_putchar('a');
	// ft_putstr("hello");
	// ft_putnbr(123);
	// printf("%d",ft_atoi("-12412"));
	ft_putnbr_base(123458, "0123456789");
	printf("%d",ft_atoi_base("-12394","0123456789"));
}