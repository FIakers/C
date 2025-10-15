void	ipssi_sort_int_tab(int *tab, int size)
{
	int	*temp;
	int	placeholder;
	int	*cell;
	int	table_len;

	table_len = size;
	cell = tab;
	while (table_len)
	{
		while (size - 1)
		{
			temp = cell + 1;
			if (*cell > *temp)
			{
				placeholder = *temp;
				*temp = *cell;
				*cell = placeholder;
			}
			cell++;
			size--;
		}
		size = table_len;
		cell = tab;
		table_len--;
	}
}
