#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 0,b = 0,max = 0,x = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        int c = i;
        int sum = 0;
        while (c)
        {
            if (c % 10 == 0 || c % 10 == 6 || c % 10 == 9)
            {
                sum += 1;
            }
            if (c % 10 == 8)
            {
                sum += 2;
            }
            c /= 10;
        }
        if (max < sum)
        {
            x = i;
            max = sum;
        }
    }
    printf("%d", x);

    return 0;
}