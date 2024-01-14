#include <stdlib.h>
#include <stdio.h>



char *my_strcat(char *buff,char *string)
{
	    int i = 0;
	        int j = 0;

		    while (buff[i] != '\0')
			            i++;
		        while (string[j] != '\0') {
				        buff[i] = string[j];
					        i++;
						        j++;
							    }
			    buff[i] = '\0';
}

int main()

{
	char* caca =malloc(sizeof(char*)*2);
	my_strcat(caca,"War");
	my_strcat(caca,"zazate");
	printf("%s\n", caca);
}
