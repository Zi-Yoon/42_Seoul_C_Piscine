/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 03:09:48 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 04:44:36 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int			t_bool;
# define TRUE 		1
# define FALSE 		0
# define SUCCESS 	0
# define EVEN_MSG 	"I have an even number of arguments.\n"
# define ODD_MSG 	"I have an odd number of arguments.\n"
# define EVEN(nbr) 	(nbr % 2) == 0
#endif