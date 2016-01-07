/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:08:24 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:13:26 by mperronc         ###   ########.fr       */
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

typedef struct		s_tetri
{
	char			pattern[4][4];
	int				pos;
	struct s_tetri	*next;
}					t_tetri;

typedef struct		s_board
{
	char			**grid;
	int				size;
}					t_board;

t_tetri				**ft_read_file(char *file_to_open, t_tetri **first);
int					check_symbols(char *pattern);
int					get_offset(char *pattern);
void				push_tetrimino_back(t_tetri **first, char *pattern);
t_tetri				*new_tetrimino(char *pattern, int pos);
void				turn_into_alphachar(char (*pattern)[4][4], int pos);
char				*pattern_to_left_corner(char *pattern);
int					can_place(char piece[4][4], t_board *board, int x, int y);
char				**put_tetri(char **board, char pattern[4][4], int x, int y);
t_board				*solve_me(t_tetri **piece, t_board *board);
char				**extend_board(char **board, int board_newsize);
char				*ft_strnew_with_dot(int size);
char				*ft_strnout(char *src);
int					get_board_size(int n_pieces);
int					list_len(t_tetri *first);
void				print_board(char **board, int board_size);
void				erase_piece(char **board, int board_size, int pos);
void				free_board(char **board, int board_size);
void				print_list(t_tetri *p);

#endif
