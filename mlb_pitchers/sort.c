#include <stdio.h>
#include <stdlib.h>

int values[] = {
    838, 41, 229, 639, 84, 257, 988, 348, 797, 783, 
    55, 992, 598, 200, 518, 295, 74, 111, 829, 159, 
    945, 221, 543, 113, 909, 104, 294, 451, 569, 690,
};

int num_cmp(const void *a, const void *b)
{
  int v1 = *(int *)a;
  int v2 = *(int *)b;
  return -(v1 - v2);
}

void printValues(void)
{
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        printf("%d, ", values[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    printValues();
    qsort(values, sizeof(values) / sizeof(values[0]), sizeof(values[0]), num_cmp);
    printValues();

    return 0;
}
