/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:33:57 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 21:45:09 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	temp1;
	unsigned char	temp2;
	unsigned int	i;

	i = 0;
	while ((i < n) && (temp1 != '\0' || temp2 != '\0'))
	{
		temp1 = *s1++;
		temp2 = *s2++;
		if (temp1 > temp2 || temp1 < temp2)
			return (temp1 - temp2);
	}
	return (temp1 - temp2);
}
