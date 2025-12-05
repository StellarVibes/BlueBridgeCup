#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    for (int i = 1950; i < 2022; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            count++;
        }
    }
    int sum = count * 366 + (2022 - 1950 - count) * 365 + 1 + 91;
    printf("%d", sum);
    
    return 0;
}