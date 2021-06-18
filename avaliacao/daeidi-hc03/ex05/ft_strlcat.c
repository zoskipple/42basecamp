#include <stdio.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int		iterator;

	iterator = 0;
	while (*str != '\0')
	{
		iterator++;
		str++;
	}
	return (iterator);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	offset;
	unsigned int	src_index;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	printf("compr d e s: %d e %d", d_len, s_len);
	offset = d_len;
	src_index = 0;
	if (size <= d_len)
		return (size + s_len);
	while (*(src + src_index) != '\0' )
	{
		*(dest + offset) = *(src + src_index);
		offset++;
		src_index++;
		if (offset >= size - 1)
			return (d_len + s_len);
	}
	*(dest + offset) = '\0';
	return (d_len + src_index);
}
