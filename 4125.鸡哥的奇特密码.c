#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char arr[10002] = {0};
    scanf("%s", arr);
    for (int i = 1; i < 10002; i++)
    {
        if (arr[i - 1] == 'L' && arr[i] == 'L')
        {
            arr[i - 1] = 0;
        }
        if (arr[i] == '\n')
        {
            break;
        }
    }
    for (int i = 0; i < 10002; i++)
    {
        if (arr[i] == 'L' || arr[i] == 'Q')
        {
            printf("%c", arr[i]);
        }
        if (arr[i] == '\n')
        {
            break;
        }
    }
    
    return 0;
}