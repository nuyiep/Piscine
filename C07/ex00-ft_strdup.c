//chuasai's code
#include <string.h> //strdup
#include <stdio.h> //printf
#include <stdlib.h> //malloc

char	*ft_strdup(char *src);

int	main(void)
{
	char source[] = "GeeksForGeeks";
	char* target1 = strdup(source);
	char* target2 = ft_strdup(source);
	printf("target1: %s\n", target1);
	printf("target2: %s\n", target2);
	return (0);
}

char *ft_strdup(char *src)
{
    int i = 0;

    while (src[i] != '\0')
        i++;
    char *dest = (char *) malloc (i+1 * sizeof(char)); // count + 1 is to add \0
    if (dest == 0)
        return 0;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}