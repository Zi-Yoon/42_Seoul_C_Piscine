void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int n;
	n = 0;
	while (n < 10)
	{
		ft_putchar('0' + n);
		n++;
	}
}