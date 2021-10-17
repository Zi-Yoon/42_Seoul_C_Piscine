/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:19:17 by byan              #+#    #+#             */
/*   Updated: 2021/10/17 20:46:38 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	if (nb)
	{
		while (*dest)
			dest++;
		while (*src)
		{
			*dest++ = *src++;
			if (--nb == 0)
			{
				*dest = '\0';
				break ;
			}
		}
	}
	return (temp);
