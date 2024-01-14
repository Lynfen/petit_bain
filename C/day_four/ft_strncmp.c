#include <unistd.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}


int		ft_strncmp(char *s1, char *s2, unsigned int n)

{
	int i;
	while (s1 && (s2) && (n!=0)){
		if (s1[i] == '\0' && s2[i] == '\0'){
			ft_putchar('0');
		}
		else if ((s1[i] < s2[i]) || (s1[i] == '\0')){
			ft_putchar('2');
		}
		else if ((s1[i] > s2[i]) || (s2[i] == '\0')){
			ft_putchar('1');
		} 
		else {
			i++;
			n--;
		}
	}

	ft_putchar ('0');
}	
	


int main (char *soupe, char *caca)
{
	soupe ="";
	caca ="";
	ft_strncmp(soupe,caca,4);

}
