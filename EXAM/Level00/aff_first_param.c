/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:01:29 by byan              #+#    #+#             */
/*   Updated: 2021/10/07 23:20:28 by byan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
    int i = 0;
    if (ac > 1)
        while (av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    write(1, "\n", 1);
    return 0;
}