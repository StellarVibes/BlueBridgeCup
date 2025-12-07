#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    for (int i = 1; i < 51; i += 2)
    {
        if (i >= 21)
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}