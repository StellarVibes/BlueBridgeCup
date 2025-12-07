#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age = 0;
    int count = 0;
    for (int i = 10; i < 100; i++)
    {
        age = i / 10 + (i % 10) * 10;
        if (i - 27 == age)
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}