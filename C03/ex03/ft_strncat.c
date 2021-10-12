/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:19:17 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 16:41:44 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	char	*p_dest;

	p_dest = dest;
	while (*dest)
		dest++;
	while (*src && nb-- > 0)
		*dest++ = *src++;
	*dest = '\0';
	return p_dest;
}