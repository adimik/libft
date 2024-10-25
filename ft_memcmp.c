/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:18:42 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 17:18:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    size_t  i;
    const unsigned char *p1, *p2;

    i = 0;
    p1 = (const unsigned char *) ptr1;
    p2 = (const unsigned char *) ptr2;

    while(i < num)
    {
        if(p1[i] != p2[i])
            return(p1[i] - p2[i]);
        i++;
    }
    return(0);
}