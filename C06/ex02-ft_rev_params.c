#include <unistd.h> 

int main(int argc, char **argv)
{
    int j = 0;
    argc = argc - 1;

    while (argc >= 1)
    {
        j = 0;
        while (argv[argc][j] != '\0')
        {
            write(1, &argv[argc][j], 1);
            j++;
        }
        argc = argc - 1;
         write(1, "\n", 1);
    }  
}
