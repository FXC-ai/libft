int ft_isdigit(int c)
{
    unsigned char cc;
    
    cc = (unsigned char) c;
	if (cc >= '0' && cc <= '9')
	{
		return (1);
	}
	return (0);
}