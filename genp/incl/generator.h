/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:03:44 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/09 19:39:09 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERATOR_H
# define GENERATOR_H

# define BLANK "................"
# include <unistd.h>
# include <stdlib.h>

int		print_O(int offset);
int		print_J(int offset, int rotation);
int		print_L(int offset, int rotation);
int		print_T(int offset, int rotation);
int		print_S(int offset, int rotation);
int		print_Z(int offset, int rotation);
int		print_I(int offset, int rotation);
void	print_lns(char *s);
char	*ft_stricpy(char *dst, char *src, int index);

#endif
