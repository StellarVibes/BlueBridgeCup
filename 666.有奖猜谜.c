#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int arr[15] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2};
    int a = 15,i = 0,sum = 777;
    while (a)
    {
        if (arr[i] == 1)
        {
            sum *= 2;
            i++;
        }
        else
        {
            sum -= 555;
            i++;
        }
        a--;
    }
    printf("%d", sum);
    
    return 0;
}