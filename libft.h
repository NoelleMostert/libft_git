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
int	ft_isprint(int c);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strdupl(const char *src);
int	ft_atoi(const char *str);
int	ft_memcmp(const void *str1, const void *str2, size_t n);

void	*ft_memset(void *str, int c, size_t n);
void 	ft_bzero(void *s, size_t n);

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, const char *src, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

size_t	ft_strlen(const char *str);

#endif
