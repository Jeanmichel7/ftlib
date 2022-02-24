#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (j < dstsize) 
	{	
		//printf("%lld dst[%d] : %c -  src[%d] : %c \n", size, i, dst[i], j, src[j]);
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
}
