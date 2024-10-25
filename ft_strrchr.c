/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:17:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 15:17:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *str, int c)
{
    char *i;
    char *last;

    i = str;
    last = NULL;
    while(1)
    {
        if(*i == (char)c)
            last = i;
        if(*i == '\0')
            break;
        i++;
    }
    if (last != NULL)
        return(last);
    else
        return(NULL);
}