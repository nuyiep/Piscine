#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char str1[] = "abcd", str2[] = "abdE", str3[] = "abcd";
    int result; 

    result = ft_strcmp(str1, str2);
    printf("%d\n", result);

    result = ft_strcmp(str1, str3);
    printf("%d\n", result);
}

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s2[i] == s1[i])
            i++;
        else if (s1 >= s2)
        {
            return 1;
            break;
        }
        else if (s1 < s2) 
            return 0;
    }
    return 0;
}

/*
https://www.programiz.com/c-programming/library-function/string.h/strcmp 
Keep looping until you find the difference
if the string is exactly the same, return 0;
if the first difference ASCII value of string1 is greater than string2, return 1; if otherwise return 0;
*/