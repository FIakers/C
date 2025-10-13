#include <unistd.h>

void	ipssi_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
