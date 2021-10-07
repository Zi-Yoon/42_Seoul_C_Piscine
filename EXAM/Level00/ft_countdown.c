/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:51:39 by byan              #+#    #+#             */
/*   Updated: 2021/10/07 23:53:44 by byan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
    char digit;
    digit = '9';
    while (digit >= '0')
    {
        write(1, &digit, 1);
        digit--;
    }
    write(1, '\n', 1);
    return 0;
}