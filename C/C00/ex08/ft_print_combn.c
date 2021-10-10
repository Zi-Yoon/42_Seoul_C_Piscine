void	ft_putchar(char c);

int ft_check_end(char *arr, int size);

void	ft_print_num(char *arr, int size);

void	ft_print_combn(int n)
{
	int index;
	char arr[2147483646];

	index = 0;
	while (index < n)
	{
		arr[index] = '0' + index;
		index++;
	}
	arr[index]--;
	while (ft_check_end(arr, n) != 1)
	{
		int i;
		int check_size;

		i = 1;
		check_size = 0;
		while (arr[n - i] == '9' - i + 1)
		{
			check_size++;
			i++;
		}
		if (check_size > 0)
		{
			arr[n - 1 - check_size]++;
			while (check_size > 0)
			{
				arr[n - check_size] = arr[n - 1 - check_size] + 1;
				check_size--;
			}
		}
		else
		{
			arr[n - 1]++;
		}
		print_num(arr, n);
	}
}

