/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:21:53 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:21:55 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
	if((c >= 'a' && c <= 'z')
	|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0); 
}
