#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    for (int i = 1; i < 2020; i++)
    {
        int a = i;
        while (a)
        {
            if (a % 10 == 9)
            {
                count++;
                break;
            }
            a /= 10;
        }
    }
    printf("%d", count);
    
    return 0;
}