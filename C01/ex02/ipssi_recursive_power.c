int	ipssi_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 1)
		return (0);
	else
	{
		if (power > 1)
			nb *= ipssi_recursive_power(nb, power - 1);
		return (nb);
	}
}
