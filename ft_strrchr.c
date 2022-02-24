char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] == c){
			ret = ((char *)s + i);
		}
		i++;
	}
	if (s[i] == c){
		ret = ((char *)s + i);
	}
	return (ret);
}
