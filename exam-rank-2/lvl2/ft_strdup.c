#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len = 0;
	int		i = 0;

	while (src[i])
		i++;
	len = i;
	i = 0;
	dup = (char *)malloc(1 * len + 1);
	if (dup == NULL)
		return (NULL);
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>
int main (void)
{
 	char *str = "igor";
    char *dup;
    
	dup = ft_strdup(str);
    
	printf("Original: '%s'\n", str);
	printf("Duplicate: '%s'\n", dup);
    return (0);	
}
