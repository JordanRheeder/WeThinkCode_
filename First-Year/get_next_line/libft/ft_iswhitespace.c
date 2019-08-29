/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:37:34 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/18 13:53:39 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_iswhitespace(int c)
{
	return (c == ' ' || (c >= '\t' || c <= '\r'));
}