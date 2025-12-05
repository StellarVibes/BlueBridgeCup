#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char* argv[])
{
    char arr[101] = { '\0' };
    scanf("%s", arr);
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    arr[i - 1] = abs(arr[i - 1]-'0' - 1)+'0';
    printf("%s", arr);

    return 0;
}