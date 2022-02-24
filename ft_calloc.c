#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	i;

	i = 0;
	ret = malloc(count * size);
	if (ret == NULL)
		return (NULL);
	while (i < count)
	{
		*((char *)ret + i) = 0;
		i++;
	}
	return (ret);
}
