/* Selection sort algorithm 
   Complexcity of algoritm is = O(n2)
   n is the number of elements in the array being sorted.

The outer loop runs 
n−1 times, iterating through each element of the array except for the last one.
The inner loop runs 
n−i−1 times in each iteration of the outer loop, where 

*/ 
#include <stdio.h>

void selectionSort(int arr[],int N)
       {
            if (N <= 0) {
        printf("Array is empty, no sorting needed.\n");
        return;
    }
            int i,j,MinIndex,temp;   // useful variable to use for storing value
            for(i=0;i<N-1;i++)   // full array iterations n-1
            {
                MinIndex = i;       // store first value of array 
                for(j=i+1;j<N;j++)
                {
                    if(arr[MinIndex]>arr[j])  // check first one is large from seconde one if than store 2nd index
                    {
                        MinIndex = j;
                    }
                   
                }
                if(MinIndex!=i)   // if MinIndex and i both are zero means no array if not than swap
                                  //  one by one
                {
                    temp = arr[i];
                    arr[i] = arr[MinIndex];
                    arr[MinIndex] = temp;
                }
            }
       }
int main()
{
    int list[5];
    int N;
    printf("Befor shorting\n");
    for(int i=0; i<5; i++)
     printf("%d\t",list[i]);
     printf("\n");
     N = sizeof(list)/sizeof(list[0]);
     selectionSort(list,N);
     printf("After sorting --->>>\n");
     for(int i=0; i<5; i++)
     printf("%d\t",list[i]);
     printf("\n");
   
}