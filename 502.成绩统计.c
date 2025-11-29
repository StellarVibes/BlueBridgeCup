#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 0,b = 0,n = 0,data = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        if (data >= 60 && data < 85)
        {
            a++;
        }
        if (data >= 85)
        {
            b++;
        }
    }
    double z = b * 1.00 / n;
    double c = (a + b) * 1.00 / n;
    printf("%.0f%%\n", c * 100);
    printf("%.0f%%", z * 100);

    return 0;
}