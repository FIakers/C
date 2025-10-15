#include <unistd.h>

void	ipssi_print_comb2(void)
{
	int		left;
	int		right;
	char	ascii[5];

	left = -1;
	right = 0;
	while (++left < 99)
	{
		while (++right <= 99)
		{
			ascii[0] = 48 + (left / 10);
			ascii[1] = 48 + (left % 10);
			ascii[2] = ' ';
			ascii[3] = 48 + (right / 10);
			ascii[4] = 48 + (right % 10);
			write(1, ascii, 5);
			if (left != 98)
			{
				write(1, ", ", 2);
			}
		}
		right = left + 1;
	}
}
