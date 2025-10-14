#include <unistd.h>

void	ipssi_print_comb2(void)
{
	char	left1;
	char	left2;
	char	right1;
	char	right2;

	left1 = '0';
	left2 = '0';
	right1 = '0';
	right2 = '1';
	while (left1 != ':')
	{
		while (left2 != ':')
		{
			while (right1 != ':')
			{
				while (right2 != ':')
				{
					write(1, &left1, 1);
					write(1, &left2, 1);
					write(1, " ", 1);
					write(1, &right1, 1);
					write(1, &right2, 1);
					if (left1 != '9' || left2 != '8')
					{
						write(1, ", ", 1);
					}
					right2++;
				}
				right1++;
				right2 = '0';
			}
			left2++;
			right1 = left1;
			right2 = left2 + 1;
			if (right2 == ':')
			{
				right1 = left1 + 1;
				right2 = '0';
			}
		}
		left1++;
		left2 = '0';
		right1 = left1;
		right2 = '1';
	}
}
