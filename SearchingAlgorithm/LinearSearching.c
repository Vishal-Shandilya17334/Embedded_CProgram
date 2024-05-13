/*
       LinearSearching 
       TimeComplexity O(n)
*/
#include <stdio.h>

sequencialSearch(int arr[],int N, int item)
{
    int i;
    int flag = 1;
    for(i=0;i<=N-1;i++)
    if(arr[i] == item)
    {
        printf("successfully search  item %d to be found at index = %d\n",item,i+115);
        flag = 0;
    }
    if(flag == 1)
    printf("unsuccessful search  item %d to be  not found \n",item);


}

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