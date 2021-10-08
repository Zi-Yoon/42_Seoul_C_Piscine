#include "ft_putchar.c"

void put_for_y(int y) // if x == 1
{
    ft_putchar('A');
    ft_putchar('\n');
    while(y > 2)
    {
        ft_putchar('B');
        ft_putchar('\n');
    }
    ft_putchar('C');
    ft_putchar('\n');
}

void put_width(int i)
{
    ft_putchar('A');
    while(i > 0)
    {
        ft_putchar('B');
    }
    ft_putchar('C');
    ft_putchar('\n');
}

void put_width_end(int i)
{
    ft_putchar('B');
    while(i > 0)
    {
        ft_putchar(' ');
    }
    ft_putchar('B');
    ft_putchar('\n');
}

void put_width_reverse(int i)
{
    ft_putchar('C');
    while(i > 0)
    {
        ft_putchar('B');
    }
    ft_putchar('A');
    ft_putchar('\n');
}

int check_one(int x, int y)
{
    if(x == 1 && y == 1)
    {
        ft_putchar('A');
        ft_putchar('\n');
        return 0;
    }
    else if(y == 1)
    {
        put_width(x-2);
        return 0;
    }
    else if(x == 1)
    {
        put_for_y(y);
        return 0;
    }
    else
    {
        return 1;
    }
}

void rush(int x, int y)
{
    if(x == 0 || y == 0)
    {
        return;
    }
    else if(x < 0)
    {
        int x = x * -1;
    }

    if(check_one(x, y) == 0)
    {
        return;
    }
    else
    {
        int temp_x = x - 2, temp_y = y - 2; // 2by2 code
        put_width(temp_x);
        while(temp_y > 0)
        {
            put_width_end(temp_x);
            temp_y--;
        }
        put_width_reverse(temp_x);
    }
    
}