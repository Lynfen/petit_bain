#include <unistd.h>

void ft_putchar(char c)

{
	 write (1, &c, 1);
}



int ft_strlen(char *str)
{
	 int i = 0;
	  while(str[i]!='\0') {
		   i++;
		    }
	   return (i);
}
int main(char *str)

{	
	str = 15;
	int i = 0;
	int j;
	j = ft_strlen(str);
	if (j == 0){
		return 1;
	}
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 32)){
			i++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
