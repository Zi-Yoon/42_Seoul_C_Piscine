/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 01:22:52 by byan              #+#    #+#             */
/*   Updated: 2021/10/08 01:40:20 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] =='\t')
        {
            i++;
        }
        while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, '\n', 1);
    return 0;
}