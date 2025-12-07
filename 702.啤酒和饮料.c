#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i < 50; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (j * 2.3 + i * 1.9 == 82.3)
            {
                printf("%d", j);
            }
        }
    }
    
    return 0;
}