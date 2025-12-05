#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int size =0;
    int data = 0;
    scanf("%d", &data);
    for (int n = 1; n <= data; n++)
    {
        int arr[1000] = { 0 };
        int count = 0;
        int nn = n;
        while (nn)
        {
            arr[count++] = nn % 10;
            nn /= 10;
        }
        int flag = 1;
        for (int i = 0; i < count; i++)
        {
            if (!((i % 2 == 0 && arr[i] % 2 == 1) || (i % 2 == 1 && arr[i] % 2 == 0)))
            {
                flag = 0;
            }
        }
        if (flag)
        {
          size++;
            //printf("%d ", n);
        }
        //printf("%d",size);
    }
    printf("%d",size);

    return 0;
}