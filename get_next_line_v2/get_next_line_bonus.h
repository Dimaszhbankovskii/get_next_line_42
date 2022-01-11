#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000
# endif

int		get_next_line(int fd, char **line);
int		ft_free_buffer(int read_bytes, char *buffer);
size_t	ft_strlen(char const *str);
void	*ft_memmove(void *dest, void const *src, size_t n);

#endif