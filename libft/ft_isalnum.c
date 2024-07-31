/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:00:19 by dmlasko           #+#    #+#             */
/*   Updated: 2024/07/13 19:41:46 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// determines if the input char is alphanumeric (A-Z; a-z; 0-9)
int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}