#include <stdio.h>

int main()
{
    int list[] = {45,3,672,66,1};
    int N;
    N = sizeof(list)/sizeof(list[0]);
    BubbleSort(list,N);
    printf("-------after sorting ------\n");
}