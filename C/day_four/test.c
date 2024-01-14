#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, char const *src)

{
	    int a = strlen(dest);
	        int b;

		    for (b = 0; src[b] != '\0'; ++b)
			            dest[a + b] = src[b];

		        return dest;
}

int main()
{
	char *caca = malloc(sizeof(char*));
	        caca = "War";
		        char *soupe = malloc(sizeof(char*));
			        soupe = "zazate";
				     caca  =  my_strcat(caca,soupe);
					        printf("%s\n", caca);
						        return(0);
}
