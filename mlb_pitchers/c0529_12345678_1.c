#include <stdio.h>
#include "pitcher.h"

int main(int argc, char const *argv[])
{
    printf("Pitcher count = %d\n", pitcher_count);
    Pitcher_print(&pitchers[0]);
    Pitcher_print(&pitchers[1]);
    return 0;
}
