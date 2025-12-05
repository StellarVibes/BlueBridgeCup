#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char arr[1000] = {0};
    scanf("%s", arr);
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] >= 'a')
        {
            arr[i] -= 32;
        }
        i++;
    }
    printf("%s", arr);
    
    return 0;
}