#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char c;
    c = 'a';
    while(c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}

void ft_print_reverse_alphabet(void)
{
    char c;
    c = 'z';
    while(c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}

int ft_check_end(char *arr, int size)
{
    int index = size - 1;
    int check_end = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[index] == '9' - i)
        {
            check_end++;
        }
        index--;
    }
    if (check_end == size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void ft_print_combn(int n)
{
    int index = 0;
    char arr[n];

    // reset to '0123456789'
    while(index < n)
    {
        arr[index] = '0' + index;
        index++;
    }

    for(int i = 0; i < n; i++)
    {
        ft_putchar(arr[i]);
    }
    ft_putchar(',');
    ft_putchar(' ');

    // while not end -> keep plus
    while(ft_check_end(arr, n) != 1)
    {
        int i = 1;
        int check_size = 0;

        // last number 9 -> change number
        while(arr[n - i] == '9' - i + 1)
        {
        check_size++;
        i++;
        }

        // from back -> change number
        if(check_size > 0)
        {
            arr[n - 1 - check_size ]++;
            while(check_size > 0)
            {
                arr[n - check_size] = arr[n - check_size - 1] + 1;
                check_size--;
            }
        }
        else
        {
            arr[n - 1]++;
        }
    // print
    for(int i = 0; i < n; i++)
    {
        ft_putchar(arr[i]);
    }
        ft_putchar(',');
        ft_putchar(' ');
    }
}

int main(void)
{
    ft_print_combn(2);
    return 0;
}