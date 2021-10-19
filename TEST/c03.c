#include <stdlib.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

char *ft_strncat(char *dest, char *src, unsigned int nb);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	printf("%d\n", ft_strlcat("acmkvkiejakl", "vk", 20));
}