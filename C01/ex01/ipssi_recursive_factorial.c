#include <stdio.h>

int	ipssi_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		nb *= ipssi_recursive_factorial(nb - 1);
		return (nb);
	}
}
