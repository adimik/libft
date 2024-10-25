/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:03:20 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 16:03:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while(i < n)
    {
        if(s1[i] != s2[i] || s1[i] == '\0')
            return(s1[i] - s2[i]);
        i++;
    }
    return(0);
}