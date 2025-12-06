#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0,i = 1,sum10 = 0,sum2 = 0,sum16 = 0,sum8 = 0;
    while (count < 2023)
    {
        sum10 = 0;
        sum2 = 0;
        sum16 = 0;
        int a = i;
        sum8 = 0;
        while (a)
        {
            sum10 += a % 10;
            a /= 10;
        }
        if (i % sum10 == 0)
        {
            sum10 = 0;
            int b = i;
            while (b)
            {
                sum2 += b % 2;
                b /= 2;
            }
            if (i % sum2 == 0)
            {
                sum2 = 0;
                int c = i;
                while (c)
                {
                    sum16 += c % 16;
                    c /= 16;
                }
                if (i % sum16 == 0)
                {
                    sum16 = 0;
                    int d = i;
                    while (d)
                    {
                        sum8 += d % 8;
                        d /= 8;
                    }
                    if (i % sum8 == 0)
                    {
                        sum8 = 0;
                        count++;
                    }
                }
            }
        }
        i++;
    }
    printf("%d ", i - 1);

    return 0;
}