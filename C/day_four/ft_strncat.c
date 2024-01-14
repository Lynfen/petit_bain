#include <stdio.h>
#include <stdlib.h>
#include <string.h>





char		*ft_strncat(char *dest, char *src, unsigned int nb)

{	
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while ((src[j] != '\0' || nb != 0 ))
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	src[j] = '\0';
	dest[i] = '\0';
	nb = 0;
	return (dest);
}
int main()

{	
	char *miam;
	char caca[15];
	strcpy(caca, "war");
	char soupe[20];
	strcpy(soupe,"zazate");
	miam =	ft_strncat(caca, soupe, 8 );
	printf("%s\n", caca);
	
}

