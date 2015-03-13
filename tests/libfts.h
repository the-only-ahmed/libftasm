#include <string.h>

int			ft_puts(char *s);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
char		*ft_strcpy(void *dst, const void *src);
void		*ft_memset(void *b, int c, size_t len);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strdup(const char *s1);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
size_t		ft_strlen(const char *s);
void		ft_cat(int fd);
void		ft_iter(char *s, void (*f)(char *));
void		ft_iteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
