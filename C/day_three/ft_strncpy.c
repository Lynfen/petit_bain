#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)

{
	int i=1;
	while(str[i]!='\0'){
		i++;
	}
	return(i);
}


char	*ft_strncpy(char *dest, char *src, int length)	

{
	int i;
	for (i = 0; length != 0; i++)
	{
		dest[i] = src[i];
		length--;
	}
}
