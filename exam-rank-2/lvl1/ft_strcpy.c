#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while(s2[i])
	{
		s1[i] = s2[i];		
		i++;
	}
	s1[i] = '\0';
	return (s1);
}	


int main()
{
	char *s2 = "hello world";
	char s1[100];

	ft_strcpy(s1, s2);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	return (0);
}
