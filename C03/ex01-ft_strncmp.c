#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char str1[] = "abcd", str2[] = "abcD", str3[] = "abcd";
    int result; 

    result = ft_strncmp(str1, str2, 3);
    printf("%d\n", result);

    result = ft_strncmp(str1, str3, 3);
    printf("%d\n", result);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;

    while (s1[1] != '\0' && s1[2] != '\0' && i < n)
    {
        if (s1[i] == s2[i])
            i++;
        else if (s1[i] > s2[i])
            return 1;
        else if (s1[i] < s2[i])
            return 0; 
    }
    return 0;
}