/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhadraou <haitamehadraoui@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:23:16 by hhadraou          #+#    #+#             */
/*   Updated: 2018/10/08 22:23:17 by hhadraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
