#include <stdio.h>
#include <stdlib.h>
#include "pitcher.h"

int Pitcher_cmp_era(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    if (p1->era < p2->era) {
        return -1;
    } else if (p1->era > p2->era) {
        return 1;
    } else {
        return 0;
    }
}

int Pitcher_cmp_win_lose(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    // 먼저 승수를 비교한다
    int win_diff = p2->win - p1->win;
    if (win_diff != 0) {
        return win_diff;
    }
    // 승수가 같으편 패 수를 비교한다
    int lose_diff = p1->lose - p2->lose;
    return lose_diff;
}

int main(int argc, char const *argv[])
{
    Pitcher_printAll(10);
    qsort(pitchers,
        pitcher_count,
        sizeof(pitchers[0]),
        Pitcher_cmp_era);
    printf("----------\n");
    Pitcher_printAll(10);
    return 0;
}
