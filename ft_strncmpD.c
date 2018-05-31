int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*c1 = (unsigned char *)s1;//char casts
	const unsigned char	*c2 = (unsigned char *)s2;
	size_t				i;

	i = 0;
	while (c1[i] && c2[i] && i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);//basically the same as -1 or 1
		i++;
	}
	if (i == n)
		return (0);//if n bytes compared
	if (c1[i])
		return (c1[i]);//basically same as 1
	if (c2[i])
		return (-c2[i]);//basically same as -1
	return (0);
}
