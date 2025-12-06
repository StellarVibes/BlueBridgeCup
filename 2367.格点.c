#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    for (int i = 1; i < 2022; i++)
    {
        int j = 1;
        for (j = 1; j < 2022; j++)
        {
            if (i * j <= 2021)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    
    return 0;
}