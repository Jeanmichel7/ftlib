#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	
	if (needle[0] == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && j < len)
				j++;
			if (j == ft_strlen(needle) && len >= i + j )
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
