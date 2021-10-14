char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		max_len;
	char	*ans;

	i = size;
	max_len = 0;
	while (i--)
		max_len += ft_strlen(strs[i]);
	ans = (char *)malloc(sizeof(**strs) + sizeof(*sep) * size);
	i = 0;
	while (i < size)
	{
		ft_strcat(ans, strs[i]);
		if (i == size - 1)
			break ;
		ft_strcat(ans, sep);
		i++;
	}
	return (ans);
}
