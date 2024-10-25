/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:37:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/21 21:37:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dest_str, const void * src_str, size_t n)
{
    unsigned const char *s;
    unsigned char *d;
    int i;

    i = 0;
    s = src_str;
    d = dest_str;

    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dest_str);
}