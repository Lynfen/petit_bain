#include <stdio.h>
#include <stdlib.h>
#include <string.h>





char		*ft_strcat(char *dest, char *src)

{	
	int j = 0;
	int i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}
int main()

{	
	char *miam;
	char caca[15];
	strcpy(caca, "war");
	char soupe[10];
	strcpy(soupe,"zazate");
	miam = 	ft_strcat(caca, soupe);
	printf("%s\n", caca);
	
}

