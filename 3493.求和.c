#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long long a = 0;
    for (int i = 1; i < 20230409; i++)
    {
        a += i;
    }
    printf("%lld", a);
    
    return 0;
}