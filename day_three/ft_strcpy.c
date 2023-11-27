#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{	
		write(1, &c, 1);	
}

int     ft_strlen(char *str)
{
	    int i = 1;
	        while(str[i] != '\0') {
			            i++;
				        }
		    return (i);
}

char		*ft_strcpy(char *dest, char *src)

{
	int i;
	for (i = 0; src[i] != '\0'; i++)

	{	dest[i] = src[i];
}	
	dest[i] = '\0';
	return (dest);
}

int main ()

{

	char *caca = malloc(sizeof(char*));
	caca = "zZz";
	char *pipi = malloc(sizeof(char) * ft_strlen(caca));
       pipi = ft_strcpy(pipi, caca);
	printf("%s", pipi);
	return (0);
}
