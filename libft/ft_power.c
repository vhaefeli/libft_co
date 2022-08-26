int ft_power(int n, int p)
{
	int r;

	r = 1;
	if (!p)
		return (1);
	while (p)
	{
		r = r * n;
		p--;
	}
	return (r);
}
