#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 1;
    for (int i = 1;; i += 2)
    {
        if (i >= 81 && i <= 92)
        {
            count++;
        }
        if (i > 92)
        {
            break;
        }
    }
    printf("%d", count);
    
    return 0;
}