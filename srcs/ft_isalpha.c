int ft_isalpha(int c)
{
    unsigned char    cc;

    cc = (unsigned char) c;
	if (!((cc >= 'A' && cc <= 'Z') || (cc >= 'a' && cc <= 'z')))
	{
		return (0);
	}
	
	return (1);
}