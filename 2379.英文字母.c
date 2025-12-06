#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = 0;
    scanf("%d", &n);
    n += 64;
    printf("%c", n);
    
    return 0;
}