
void	reverse_bits(unsigned char b)
{
	unsigned char	res;
	int				count = 8;

	while (char_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}

int		main(void)
{
	reverse_bits(63);
	return (0);
}
