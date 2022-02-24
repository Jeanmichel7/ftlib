typedef unsigned long size_t;

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	temp;

	i = 0;
	while (len)
	{
		//printf("src[%d] : %d - dst[%d] : %d \n", i, *((int *)src + i), i, *((int *)dst + i));
		temp = *((char *)src + i);
		*((char *)dst + i) = temp;
		i++;
		len--;
	}
	return (dst);
}
