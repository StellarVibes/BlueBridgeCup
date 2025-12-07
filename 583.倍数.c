#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    for (int i = 1; i < 2021; i++)
    {
        if (i % 4 == 0 && i % 6 == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}