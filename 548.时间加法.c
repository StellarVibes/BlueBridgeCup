#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 0,b = 0,t = 0;
    scanf("%d%d%d", &a, &b, &t);
    b += t % 60;
    if (b > 60)
    {
        b -= 60;
        a++;
    }
    a += t / 60;
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}