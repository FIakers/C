int	ipssi_fibonacci(int index)
{
	int		result;

	if (index < 0 || index == 1 || index == 2)
		return (1);
	else if (index == 0)
		return (0);
	else
	{
		result = 1;
		if (index-- > 2)
			result = ipssi_fibonacci(index) + ipssi_fibonacci(index - 1);
		return (result);
	}
}
