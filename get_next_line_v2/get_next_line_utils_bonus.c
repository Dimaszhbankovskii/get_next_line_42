#include "get_next_line_bonus.h"

int	ft_free_buffer(int read_bytes, char *buffer)
{
	free(buffer);
	buffer = NULL;
	if (read_bytes < 0)
		return (-1);
	else if (read_bytes == 0)
		return (0);
	else
		return (1);
}

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!src && !dest)
		return (NULL);
	if (dest < src)
	{
		s = (unsigned char *)src;
		d = (unsigned char *)dest;
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		s = (unsigned char *)src + n;
		d = (unsigned char *)dest + n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
