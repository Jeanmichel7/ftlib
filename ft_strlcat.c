#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t res;

	if (dstsize < ft_strlen(dst))
		res = ft_strlen(src) + dstsize;
	else
		res = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (i + 1 < dstsize) 
	{	
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
