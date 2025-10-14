#include <unistd.h>

void	ipssi_print_comb2(void)
{
	int		left;
	int		right;
	char	asciileft[2];
	char	asciiright[2];

	left = -1;
	right = 0;
	while (++left < 99)
	{
		while (++right <= 99)
		{
			asciileft[0] = 48 + (left / 10);
			asciileft[1] = 48 + (left % 10);
			write(1, asciileft, 2);
			write(1, " ", 1);
			asciiright[0] = 48 + (right / 10);
			asciiright[1] = 48 + (right % 10);
			write(1, asciiright, 2);
			if (left != 98)
			{
				write(1, ", ", 2);
			}
		}
		right = left + 1;
	}
}

int	main(void)
{
	ipssi_print_comb2();
	return (1);
}
