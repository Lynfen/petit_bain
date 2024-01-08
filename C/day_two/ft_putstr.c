

#include <unistd.h>

void ft_putchar(char c)
{	
		write(1, &c, 1);	
}

void        ft_putstr(char *str)
{
	    for (int i = 0; str[i] != '\0'; i++) 
		            ft_putchar(str[i]);
}

int main (char *test)

{
	test = "65";
	ft_putstr(test);
	
}
