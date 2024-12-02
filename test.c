#include <unistd.h>

void	ft_print_comb(void)
{
	int	n;
	int	m;
	int	k;

	n = 0;
	m = 1;
	k = 2;
	while (n < 7)
	{
		while (m < 8)
		{
			while (k < 9)
			{
				write(1, &n, 1);
				write(1, &m, 1);
				write(1, &k, 1);
			}
			k++;
		}
		m++;
		k = m + 1;
	}
	n++;
	m = n + 1;
	k = m + 1;
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
