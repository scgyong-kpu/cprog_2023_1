#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 30; i++) {
        int v = rand() % 1000;
        printf("%d, ", v);
    }
    printf("\n");

    return 0;
}
