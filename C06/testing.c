#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc > 1)
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                write(1, &argv[i][j], 1);
                j++;    
            }
            i++; 
            write(1, "\n", 1);
            
        }
        
    }
}