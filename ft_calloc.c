/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:45:12 by marvin            #+#    #+#             */
/*   Updated: 2024/10/23 14:45:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t num_elements, size_t size_of_element)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = malloc(num_elements * size_of_element);
	while (i < (num_elements * size_of_element))
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)(arr));
}
