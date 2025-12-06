#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    for (int i = 1; i <= 3030; i++)
    {
        if (3030 % i == 0 && 2020 % i == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}