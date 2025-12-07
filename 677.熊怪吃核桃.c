#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 1543;
    int count = 0;
    while (sum > 0)
    {
        if (sum % 2 == 1)
        {
            count++;
        }
        sum /= 2;
    }
    printf("%d", count);
    
    return 0;
}