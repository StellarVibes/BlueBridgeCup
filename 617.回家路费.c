#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0,count = 0,i = 1;
    while (sum < 108)
    {
        sum += i;
        i += 2;
        count++;
    }
    printf("%d", count);

    return 0;
}