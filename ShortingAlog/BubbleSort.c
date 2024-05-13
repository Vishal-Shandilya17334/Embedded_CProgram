#include <stdio.h>

void BubbleSort(int arr[],int n)
{
    int round,i,temp;     //some require variable during program  execution
    for(round =1; round<=n-1;round++)    // round perform how many time play loop for shorting
      for(i=0;i <= n-1-round;i++)    // this reduced no of the to leave end of index
        
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];      //swap if right element greater than left element
                arr[i+1] = temp;
            }
            
}

int main()
{
    int list[] = {1,3,672,66,1};
    int N;
    printf("------befor sorting ------\n");
    for(int i = 0; i<5;i++)
    printf("%d\t",list[i]);

    N = sizeof(list)/sizeof(list[0]);
    BubbleSort(list,N);
    printf("\n-------after sorting ------\n");
    for(int i = 0; i<5;i++)
    printf("%d\t",list[i]);
}