/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:55:48 by byan              #+#    #+#             */
/*   Updated: 2021/10/08 00:28:47 by byan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
    char even = 'z';
    char odd = 'Y';
    while (odd >= 'A')
    {
        write(1, &even, 1);
        write(1, &odd, 1);
        even -= 2;
        odd -= 2;
    }
    write(1, '\n', 1);
    return 0;
}