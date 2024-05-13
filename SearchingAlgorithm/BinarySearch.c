#include <stdio.h>

int main()
{
    int list[] = {3,6,11,6,7,33,33};
    int N = sizeof(list)/sizeof(list[0]);
    int item;
    printf("list item is\n");
    for(int i=0;i<=N-1;i++)
    printf("%d\t",list[i]);
    printf("\nenter you item which you want to find\n");
    scanf("%d",&item);
    sequencialSearch(list,N,item);
}