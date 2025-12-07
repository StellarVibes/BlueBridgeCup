#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 2;
    int count = 0;
    while(count!=2019)
    {
        int flage = 1;
        for(int i = 2;i<a;i++)
        {
            if(a%i==0)
            {
                flage = 0;
                break;
            }
        }
        if(flage)
        {
            count++;
        }
        a++;
    }
    printf("%d",a-1);

    return 0;
}