#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    for (int i = 1; i <= 2020; i++)
    {
        if (2020 % i == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}