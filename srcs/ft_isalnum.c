int ft_isalnum(int c)
{
    unsigned char cc;

    cc = (unsigned char) c;
	if ((cc >= '0' && cc <= '9') || (cc >= 'A' && cc <= 'Z') || (cc >= 'a' && cc <= 'z'))
	{
		return (1);
	}
	return (0);
}