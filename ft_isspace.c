/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:04:59 by codespace         #+#    #+#             */
/*   Updated: 2024/07/27 19:16:59 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks whether int c is a space or not
// Returns 0 on success and 1 on failure
int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
