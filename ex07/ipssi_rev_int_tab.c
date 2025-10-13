void	ipssi_rev_int_tab(int *tab, int size)
{
	int	*temp;
	int	placeholder;

	while (size > 0)
	{
		temp = tab + size - 1;
		placeholder = *tab;
		*tab = *temp;
		*temp = placeholder;
		size--;
		size--;
		tab++;
	}
}
