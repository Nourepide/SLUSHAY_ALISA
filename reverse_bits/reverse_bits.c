
void	reverse_bits(unsigned char b)
{
	unsigned char	res;
	int				count = 8;

	while (count--)
	{
		res = (res << 1) | (b & 1);
		b >>= 1;
	}
	return (res);
}

int		main(void)
{
	reverse_bits(63);
	return (0);
}
