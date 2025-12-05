#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    char arr[10000] = {0};
    scanf("%s", arr);
    for (int i = 0; i < sizeof(arr); i++)
    {
        if ((arr[i] - '1' + 1) % 2 == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}