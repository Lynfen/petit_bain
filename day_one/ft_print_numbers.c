#include <unistd.h>

void ft_print_numbers(void)

{   
	char c = 48;
	while (c < 58){
		write (1,&c,1);
		c++;
	}
}
