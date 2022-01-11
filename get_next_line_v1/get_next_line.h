#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000
# endif

char	*get_next_line(int fd);
char	*ft_free_buffer(char *buffer);
size_t	ft_strlen(char const *str);
void	*ft_memmove(void *dest, void const *src, size_t n);

#endif