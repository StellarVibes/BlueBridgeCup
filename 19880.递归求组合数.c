#include <stdio.h>
#include <stdlib.h>

long long fuc(int n, int p)
{
    long long count = 1;
    for (int i = n; i >= n-p; i--)
    {
        count *= i;
    }
    return count;
}

int main(int argc, char* argv[])
{
    int num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int n = 0;
        int m = 0;
        scanf("%d%d", &n, &m);
        long long a = fuc(n, m-1) / fuc(m, m-1);
        if(i<num-1)
        {
          printf("%d\n", a);
        }
        else
        {
          printf("%d", a);
        }
    }
    
    return 0;
}