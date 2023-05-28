#include <stdio.h>
#include "pitcher.h"

int main(int argc, char const *argv[])
{
    printf("Pitcher count = %d\n", pitcher_count);
    Pitcher_printAll(0);
    return 0;
}
