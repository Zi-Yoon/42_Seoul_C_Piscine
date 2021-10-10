void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char num[20];
	int temp;
	int n;
	int i;

	temp = nb;
	n = 0;
	i = 0;
	while(i < 20)
	{
		num[i] = '0';
		i++;
	}
	while (temp > 0)
	{
		int per_temp;
		per_temp = temp % 10;
		num[n] += per_temp;
		temp = temp / 10;
		n++;
	}
	i = n;
	while (i > 0)
	{
		ft_putchar(num[i]);
		i--;
	}
}