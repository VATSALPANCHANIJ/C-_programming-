#include <stdio.h>
#include <unistd.h> // for sleep function

int main()
{
    int i;

    for (i = 1; i <= 120; i++)
    {
        printf("\033[31;47m Happy birthday tirth \x03 \n"); // ANSI escape codes for red text on white background
        fflush(stdout); // Flush the output buffer to ensure immediate display

        usleep(200000); // usleep is in microseconds (1 second = 1000000 microseconds)
    }

    return 0;
}

