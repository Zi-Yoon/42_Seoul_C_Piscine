#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main()
{
	printf("%d \n", ft_iterative_factorial(3));
	printf("%d \n", ft_recursive_factorial(3));
	printf("%d \n", ft_iterative_power(3, 2));
	printf("%d \n", ft_recursive_power(3, 2));
	printf("%d \n", ft_fibonacci(5));
	printf("%d \n", ft_sqrt(16));
	printf("%d \n", ft_is_prime(29));
	printf("%d \n", ft_find_next_prime(29));
}