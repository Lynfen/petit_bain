#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)	

{
	int i;
	while (src && (n != 0)){
		if (src[i] ='\0'){
			while(n!=0){
				dest[i] = '\0';
				i++;
				n--;
			}
		}
		else{
			dest[i] = src[i];
			i++;
			n--;
		}
	}
		
}
int main ()

{
	char *caca = malloc(sizeof(char*));
	char *soupe = malloc(sizeof(char*));
	soupe = "zgouloubeh";
	ft_strncpy(caca,soupe,5);
	printf("%s", caca);
}
