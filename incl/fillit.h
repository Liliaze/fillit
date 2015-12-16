/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:08:24 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 15:44:39 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdio.h>

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

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
//int					get_next_line(int const fd, char **line);
int					is_pattern_valid(char *pattern);
int					get_offset(char *pattern);
int					is_pattern_valid_dotsharp(char *pattern);
int					is_pattern_valid_o(char *pattern, int offset);
int					is_pattern_valid_i(char *pattern, int offset);
int					is_pattern_valid_l(char *pattern, int offset);
int					is_pattern_valid_j(char *pattern, int offset);
int					is_pattern_valid_t(char *pattern, int offset);
int					is_pattern_valid_s(char *pattern, int offset);
int					is_pattern_valid_z(char *pattern, int offset);
void				push_tetrimino_back(t_tetri **first, char *pattern);
t_tetri				*new_tetrimino(char *pattern, int pos);
void				turn_into_alphachar(char (*pattern)[4][4], int pos);
char				*pattern_to_left_corner(char *pattern);
int					can_place(char piece[4][4], char **board, int x, int y);
char				**put_tetri(char **board, char pattern[4][4], int x, int y);
char				**solve_me(t_tetri *piece, char **board, int board_size);
char				**extend_board(char **board, int board_newsize);
char				*ft_strnew_with_dot(char *new_boardline, int size);
void				ft_strnout(char *dest, char *src);
int					get_board_size(int n_pieces);
int					list_len(t_tetri *first);

#endif
