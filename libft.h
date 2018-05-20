#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

int	ft_isupper(int c);
int	ft_islower(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_strcmp(char *s1, char *s2);
int	ft_strdupl(const char *src);
int	ft_atoi(const char *str);

size_t	ft_strlen(const char *str);

