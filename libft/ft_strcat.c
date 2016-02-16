/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:16:01 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 15:28:03 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *s1, const char *s2)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = s1;
	ptr2 = (char *)s2;
	while (*ptr1)
		ptr1++;
	while (*ptr2)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';
	return (s1);
}
