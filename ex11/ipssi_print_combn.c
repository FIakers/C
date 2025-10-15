#include <unistd.h>

void	ipssi_print_combn(int n)
{
	int     left;
    char    ascii[n + 1];

	if (n <= 0 || n >= 10)
		return ;
	left = -1;
    while (++left < 99)
    {
        ascii[0] = 48 + (left / 10);
        ascii[1] = 48 + (left % 10);
        ascii[2] = ' ';
        write(1, ascii, 5);
        if (left != 98)
        {
            write(1, ", ", 2);
        }
    }
}

int main(void)
{
	int		n;
	
	n = 2;
	ipssi_print_combn(n);
	return (1);
}
