char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;

	while (src)
		src++;
	len = src;
	src = 0;
	dst = (char *)malloc(1 * len + 1);
	if (dst == NULL)
		return (NULL);
	while(src)
	{
		dst = *src;
		src++;
	}
	dst = '\0';
	return (dst);
}

int	main()
{

	return (0);
}
