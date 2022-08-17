#include <unistd.h> 

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i = 1; 
        while (argc)
        {
            if (argv[i] > argv[i+1])
            {
                i++;
            }
        }
    }
}