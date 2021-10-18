#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "/mnt/d/Coding/42_Seoul/C05/ex00/ft_iterative_factorial.c"
#include "/mnt/d/Coding/42_Seoul/C05/ex01/ft_recursive_factorial.c"
#include "/mnt/d/Coding/42_Seoul/C05/ex02/ft_iterative_power.c"
#include "/mnt/d/Coding/42_Seoul/C05/ex03/ft_recursive_power.c"
#include "/mnt/d/Coding/42_Seoul/C05/ex04/ft_fibonacci.c"
#include "/mnt/d/Coding/42_Seoul/C05/ex05/ft_sqrt.c"
#include "/mnt/d/Coding/42_Seoul/C05/ex06/ft_is_prime.c"
#include "/mnt/d/Coding/42_Seoul/C05/ex07/ft_find_next_prime.c"
#include "/mnt/d/Coding/42_Seoul/C05/ex08/ft_the_queens_puzzle.c"

int main()
{
	printf("%d \n", ft_iterative_factorial(10));
	printf("%d \n", ft_recursive_factorial(10));
	printf("%d \n", ft_iterative_power(10, 4));
	printf("%d \n", ft_recursive_power(10, 4));
	printf("%d \n", ft_fibonacci(5));
	printf("%d \n", ft_sqrt(26574025));
	printf("%d \n", ft_is_prime(29));
	printf("%d \n", ft_find_next_prime(26574025));
}