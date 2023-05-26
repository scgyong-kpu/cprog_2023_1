#include <stdio.h>

// from MLB.com:
// RK  Player  Team    W   L   ERA▲    G   GS  SV  SVO IP  H   R   ER  HR  BB  SO  AVG WHIP
// 1    Ryu, H LAD 6   1   1.52    9   9   0   0   59.1    40  10  10  6   4   59  .190    0.74

// Tm = Team, W = Wins, L = Loses, ERA = Earned Runs Average
// G = Games, GS = Games Started, SV = Saves, SVO = Save Opportunity
// IP = Innings Pitched, H = Hits, R = Runs, ER = Earned Runs
// HR = Homeruns, BB = Base on balls (walk), SO = Strikeouts
// AVG = Hit Average, WHIP = (Walks+Hits)/IP

typedef struct pitcher {
    char lastName[20], firstName[4];
    char team[8];
    int win, lose;
    float era;
    int games, gamesStarted, saves, saveOppertunities;
    float inningsPitched;
    int hits, runs, earnedRuns, homeRuns, basesOnBalls, strikeOuts;
    float battingAverage, whip;
} Pitcher;

Pitcher pitchers[] = {
    { "Ryu", "H", "LAD", 6, 1, 1.52, 9, 9, 0, 0, 59.1, 40, 10, 10, 6, 4, 59, .190, 0.74 },
    { "Davies", "Z", "MIL", 5, 0, 1.54, 9, 9, 0, 0, 52.2, 46, 14, 9, 4, 16, 36, .240, 1.18 }
};

const int pitcher_count = sizeof(pitchers) / sizeof(pitchers[0]);

int main(int argc, char const *argv[])
{
    printf("Pitcher count = %d\n", pitcher_count);
    return 0;
}