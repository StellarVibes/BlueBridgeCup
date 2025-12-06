#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int arr[30] = {99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7,
                   53, 64, 9, 28, 84, 34, 96, 52, 82, 51, 77};
    int count = 0;
    for (int i = 0; i < 30; i++)
    {
        int j = i;
        while (j < 30)
        {
            if (arr[i] * arr[j + 1] >= 2022)
            {
                count++;
            }
            j++;
        }
    }
    printf("%d", count);
    
    return 0;
}