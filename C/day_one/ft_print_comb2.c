#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}	

void print_int (int n)
{
	if (n < 10)
	{ 
		ft_putchar('0');
		ft_putchar(n+'0');
	}
	else
	{
		ft_putchar((n/10)+'0');
		ft_putchar((n%10)+'0');	
	}
}



void ft_print_comb2 (void) 
{
	int i = 0;
	int j;
	while (i <= 99) {
		j = i + 1;
		while (j <= 99) {
			print_int (i);
			ft_putchar (' ');
			print_int (j);
 			if (i == 98 && j == 99)
				return;
			ft_putchar (',');
			j++;
		}
	i++;	
	}

}

