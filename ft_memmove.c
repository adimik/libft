/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:36:08 by marvin            #+#    #+#             */
/*   Updated: 2024/10/21 16:36:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, size_t n)
{
    unsigned const char *s;
    unsigned char *d;
    int     i;

    s = (unsigned const char*)src;
    d = (unsigned char *)dest;
    i = 0;
    if(d < s)
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }        
    }
    else
    {
        while(n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return(dest);
}