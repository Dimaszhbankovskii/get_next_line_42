#include "get_next_line.h"

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
