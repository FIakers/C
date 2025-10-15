void	ipssi_rev_int_tab(int *tab, int size)
{
	int	*temp;
	int	placeholder;
	int	*cell;

	cell = tab;
	while (size > 0)
	{
		temp = cell + size - 1;
		placeholder = *cell;
		*cell = *temp;
		*temp = placeholder;
		size--;
		size--;
		cell++;
	}
}
