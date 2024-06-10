/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:43:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/06/10 09:04:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes 0s to n bytes of string pointed by s.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
