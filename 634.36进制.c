#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int y = ('y' - 'a' + 10), n = ('n' - 'a' + 10) * 36, a = 10 * 36 * 36, m = ('m' - 'a' + 10) * 36 * 36 * 36;
    printf("%d", y + n + a + m);

    return 0;
}