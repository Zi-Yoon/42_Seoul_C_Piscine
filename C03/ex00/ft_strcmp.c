/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:18:48 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 21:44:29 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	temp1;
	unsigned char	temp2;

	while (temp1 != '\0' || temp2 != '\0')
	{
		temp1 = *s1++;
		temp2 = *s2++;
		if (temp1 > temp2 || temp1 < temp2)
			return (temp1 - temp2);
	}
	return (temp1 - temp2);
}
