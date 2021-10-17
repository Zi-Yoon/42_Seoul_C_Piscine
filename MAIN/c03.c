#include <stdlib.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	printf("%s\n", ft_strstr("acmkvkiejakl", "a"));
}