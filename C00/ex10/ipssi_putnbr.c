#include <unistd.h>

void	ipssi_putnbr(int nb)
{
	char	num;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			nb = -nb - 2000000000;
			write(1, "-2", 2);
		}
		else
		{
			nb = -nb;
			write(1, "-", 1);
		}
	}
	if (nb > 9)
	{
		num = 48 + (nb % 10);
		nb = nb / 10;
		ipssi_putnbr(nb);
	}
	else
		num = 48 + nb;
	write(1, &num, 1);
}
