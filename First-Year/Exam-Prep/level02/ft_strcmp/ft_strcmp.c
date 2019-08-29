int	ft_strcmp(char *s1, char *s2)
{
    int result;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
    if (*s1 - *s2 > 0)
        return (1);
    else if (*s1 - *s2 == 0)
        return (0);
    else
        return (-1);
}