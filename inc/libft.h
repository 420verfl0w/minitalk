/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:40:44 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/08 22:31:24 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# define LIBFT_NULL (void *)0

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
}	t_list;

//---- Bonus Functions ----
t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int			ft_lstsize(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));

// ---- Char Functions ----
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isblank(int c);
int			ft_iscntrl(int c);
int			ft_isdigit(int c);
int			ft_isgraph(int c);
int			ft_islower(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isupper(int c);
int			ft_isxdigit(int c);

// ---- Nbrs Functions ----
int			ft_nbrlen(long long nb);
int			ft_atoi(const char *nptr);

// ---- Strs Functions ----
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strcapitalize(char *str);
char		*ft_strcat(char *dest, char *src);
char		*ft_strcasestr(const char *big, const char *l);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strlowcase(char *str);
char		*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strndup(const char *s1, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strrev(char *str);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strupcase(char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_str_is_alpha(char *str);
int			ft_str_is_lowercase(char *str);
int			ft_str_is_numeric(char *str);
int			ft_str_is_printable(char *str);
int			ft_str_is_uppercase(char *str);
int			ft_strlen(const char *s);
int			ft_strcasecmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr(char *s);
void		ft_putstr_fd(char *s, int fd);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

// ---- Mmry Functions ----
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);

#endif
