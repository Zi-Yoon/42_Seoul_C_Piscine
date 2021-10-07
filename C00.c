#include <unistd.h>
#include <stdio.h>

// 00
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// 01
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

// 02
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

// 03
void ft_print_numbers(void)
{
    int n = 0;
    while (n < 10)
    {
        ft_putchar('0' + n);
        n++;
    }
}

// 04
void ft_is_negative(int n)
{
    if (n < 0)
    {
        ft_putchar('N');
    }
    else
    {
        ft_putchar('P');
    }
}

// for 05 ~ 08
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

// last_num -> immediately stop
void print_num(char *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        ft_putchar(arr[i]);
    }
    if(ft_check_end(arr, size) == 1)
    {
        return;
    }
    else
    {
        ft_putchar(',');
        ft_putchar(' ');
        return;
    }
}

// 05
void ft_print_comb(void)
{
    // start num
    int index = 0;
    char arr[3] = {'0','1','1'};

    while(ft_check_end(arr, 3) != 1)
    {
        int i = 1;
        int check_size = 0;

        // last number 9 -> change number
        while(arr[2] == '9' - i + 1)
        {
            check_size++;
            i++;
        }
        
        // from back -> change number
        if(check_size > 0)
        {
            arr[2 - check_size ]++;
            while(check_size > 0)
            {
                arr[3 - check_size] = arr[2 - check_size] + 1;
                check_size--;
            }
        }
        else
        {
            arr[2]++;
        }
        print_num(arr, 3);
    }
    return;
}

// 06
void ft_print_comb2(void)
{
    int index = 0;
    int a1 = 0;
    int a2 = 0;
    int b1 = 0;
    int b2 = 1;
    char arr1[2] = {'0', '0'};
    char arr2[2] = {'0', '0'};
    while(a1*10 + a2 != 99)
    {
        while(b1*10 + b2 != 99)
        {
            if(b2 == 9)
            {
                b1++;
                b2 = 0;
            }
            arr2[0] += b1;
            arr2[1] += b2;
            ft_putchar(arr1[0]);
            ft_putchar(arr1[1]);
            ft_putchar(' ');
            ft_putchar(arr2[0]);
            ft_putchar(arr2[1]);
            ft_putchar(',');
            ft_putchar(' ');
            b2++;
        }
        ft_putchar(arr1[0]);
        ft_putchar(arr1[1]);
        ft_putchar(' ');
        ft_putchar(arr2[0]);
        ft_putchar(arr2[1]);
        if(a1*10 + a2 == 98)
        {
            return;
        }
        ft_putchar(',');
        ft_putchar(' ');
        if(a2 == 9)
        {
            a1++;
            a2 = 0;
        }
        else
        {
            a2++;
        }
        b1 = a1;
        b2 = a2 + 1;
    }
}


// 07
void ft_putnbr(int nb)
{
    char num[20];
    int temp = nb;
    int n = 0;
    for (int i = 0; i < 20; i++)
    {
        num[i] = '0';
    }
    while (temp > 0)
    {
        int per_temp = temp % 10;
        num[n] += per_temp;
        temp = temp / 10;
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        ft_putchar(num[i]);
    }
}

// 08
void ft_print_combn(int n)
{
    int index = 0;
    char arr[n];

    // reset to '0123456788'
    while(index < n)
    {
        arr[index] = '0' + index;
        index++;
    }
    arr[index]--;

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
                arr[n - check_size] = arr[n - 1 - check_size] + 1;
                check_size--;
            }
        }
        else
        {
            arr[n - 1]++;
        }
        // print
        print_num(arr, n);
    }
}

int main(void)
{
    ft_print_comb();
    ft_print_comb2();
    ft_print_combn(2);
    return 0;
}