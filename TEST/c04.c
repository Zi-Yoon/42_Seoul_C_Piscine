#include <stdio.h>
#include <unistd.h>
#include "/mnt/d/Coding/42_Seoul/C04/ex00/ft_strlen.c"
// #include "/mnt/d/Coding/42_Seoul/C04/ex01/ft_putstr.c"
#include "/mnt/d/Coding/42_Seoul/C04/ex02/ft_putnbr.c"
#include "/mnt/d/Coding/42_Seoul/C04/ex03/ft_atoi.c"
#include "/mnt/d/Coding/42_Seoul/C04/ex04/ft_putnbr_base.c"
#include "/mnt/d/Coding/42_Seoul/C04/ex05/ft_atoi_base.c"

int main()
{
	// printf("%d", ft_strlen("helloasdgsdagag"));
	// printf("\n");

	// ft_putstr("hello");
	// printf("\n");

	// ft_putnbr(-2147483647);
	// printf("\n");

	printf("%d", ft_atoi("  asdff-+--+1241612"));
	printf("\n");

	ft_putnbr_base(123458, "0123456789");
	printf("\n");

	printf("%d",ft_atoi_base("-12394abd","0123456789"));
	printf("\n");
}