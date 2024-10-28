/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimik <adimik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:17:43 by adimik            #+#    #+#             */
/*   Updated: 2024/10/27 21:02:33 by adimik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
    size_t  i;
    char    *substr;

    if(!s)
        return(NULL);
    if((unsigned int)ft_strlen(s) < start)
        return(NULL);
    substr = malloc((len - start) * sizeof(char));
    if (!substr)
        return(NULL);
    i = 0;
    while(s[start + i] && len > i)
        {
            substr[i] = s[start + i];
            i++;
        }
    substr[i] = '\0';
    return (substr);
}
