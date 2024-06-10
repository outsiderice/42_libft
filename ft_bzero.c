/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:43:11 by amagnell          #+#    #+#             */
/*   Updated: 2022/09/19 19:16:35 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Writes 0s to n bytes of string pointed by s.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
