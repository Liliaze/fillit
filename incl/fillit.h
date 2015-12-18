/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:08:24 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/18 12:09:58 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 64

typedef struct		s_tetri
{
	int				size_x;
	int				size_y;
	char			pattern[4][4];
	int				pos;
	struct s_tetri	*next;
}					t_tetri;

t_tetri				**ft_read_file(char *file_to_open, t_tetri **first);
int					check_symbols(char *pattern);
int					check_link(char *pattern, int i, int nb_appel);
int					get_offset(char *pattern);
void				push_tetrimino_back(t_tetri **first, char *pattern);
t_tetri				*new_tetrimino(char *pattern, int pos);
void				turn_into_alphachar(char (*pattern)[4][4], int pos);
char				*pattern_to_left_corner(char *pattern);
int					can_place(char piece[4][4], char **board, int x, int y);
char				**put_tetri(char **board, char pattern[4][4], int x, int y);
char				**solve_me(t_tetri **piece, char **board, int board_size);
char				**extend_board(char **board, int board_newsize);
char				*ft_strnew_with_dot(char *new_boardline, int size);
void				ft_strnout(char *dest, char *src);
int					get_board_size(int n_pieces);
int					list_len(t_tetri *first);

#endif
