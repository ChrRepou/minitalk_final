/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:39:27 by crepou            #+#    #+#             */
/*   Updated: 2023/01/20 10:55:43 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <stdarg.h>
# define HEX "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_isalpha(int argument);

int				ft_isdigit(int argument);

int				ft_isalnum(int argument);

int				ft_isascii(int argument);

int				ft_isprint(int argument);

size_t			ft_strlen(const char *str);

void			*ft_memset(void *str, int c, size_t n);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

int				ft_toupper(int c);

int				ft_tolower(int c);

char			*ft_strchr(const char *str, int c);

char			*ft_strrchr(const char *str, int c);

int				ft_strncmp(const char *str1, const char *str2, size_t n);

void			*ft_memchr(const void *str, int c, size_t n);

int				ft_memcmp(const void *str1, const void *str2, size_t n);

char			*ft_strnstr(const char *s1, const char *s2, size_t len);

int				ft_atoi(const char *str);

void			*ft_calloc(size_t nitems, size_t size);

char			*ft_strdup(const char *string);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void			ft_striteri(char *s, void (*f)(unsigned int, char*));

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *s, int fd);

void			ft_putendl_fd(char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

char			*ft_itoa(int n);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s1, char const *set);

char			**ft_split(char const *s, char c);

void			ft_lstadd_back(t_list **lst, t_list *new);

void			ft_lstadd_front(t_list **lst, t_list *new);

void			ft_lstdelone(t_list *lst, void (*del)(void*));

t_list			*ft_lstnew(void *content);

int				ft_lstsize(t_list *lst);

t_list			*ft_lstlast(t_list *lst);

void			ft_lstclear(t_list **lst, void (*del)(void *));

void			ft_lstiter(t_list *lst, void (*f)(void *));

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
					void (*del)(void *));

int				ft_printf(const char *str, ...);
char			*ft_itoa_u(unsigned int n);
int				ft_type_d(va_list args);
int				ft_type_u(va_list args);
int				ft_type_s(va_list args);
int				ft_type_c(va_list args);
int				ft_type_perc(void);
int				ft_print_null(void);
int				ft_dec_to_hex_ui(unsigned int val, char type);
int				ft_dec_to_hex(size_t val);

#endif