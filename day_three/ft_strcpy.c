#include <stdio.h>

char		ft_strcpy(char *dest, char *src)

{
	*src = *dest;
}

int main ()

{
	char caca="caca";
	char pipi;
	ft_strcpy(&caca, &pipi);
	printf("%s", pipi);
	return (0);
}
