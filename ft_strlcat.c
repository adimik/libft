/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:23:10 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 13:23:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t q;

    i = 0;
    q = 0;
    while (q < size && dst[q])
        q++;
    if (q == size)
    {
        while (src[i])
            i++;
        return size + i;
    }
    while (q + 1 < size && src[i])
    {
        dst[q] = src[i];
        i++;
        q++;
    }
    if (q < size)
        dst[q] = '\0';
    while (src[i])
        i++;
    return q + i;
}