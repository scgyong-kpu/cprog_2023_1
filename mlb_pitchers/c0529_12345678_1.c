#include <stdio.h>
#include <stdlib.h>
#include "pitcher.h"

int Pitcher_cmp_win(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    int win_diff = p2->win - p1->win;
    return win_diff;
}

int main(int argc, char const *argv[])
{
    Pitcher_printAll(10);
    qsort(pitchers,
        pitcher_count,
        sizeof(pitchers[0]),
        Pitcher_cmp_win);
    printf("----------\n");
    Pitcher_printAll(10);
    return 0;
}
