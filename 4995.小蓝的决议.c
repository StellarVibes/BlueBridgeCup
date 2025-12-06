#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = 0,a = 0,b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (b >= (a - b))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        if (i != n - 1)
        {
            printf("\n");
        }
    }

    return 0;
}