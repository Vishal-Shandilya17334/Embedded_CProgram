/*insertion sort

Insertion sort is a simple sorting algorithm that works by building a sorted list one
 element at a time. It repeatedly takes an unsorted element and inserts it into its 
 correct position in the sorted part of the list. Here's how the insertion sort
  algorithm works:

1.Start with the second element in the list.
2.Compare the second element with the first element. If the second element is smaller, swap them.
3.Move to the third element and compare it with the elements to its left in the sorted list, swapping as necessary to insert it into the correct position in the sorted part of the list.
4.Repeat this process for each subsequent element until the entire list is sorted.*/

#include <stdio.h>

void InsertionSort(int arr[],int N)
{
    int i,j,temp;
    for(i=1;i<N;i++)
    {
        temp = arr[i];
        for(j=i-1;j >=0 && temp < arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1] = temp;
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
    InsertionSort(list,N);
    printf("\n-------after sorting ------\n");
    for(int i = 0; i<5;i++)
    printf("%d\t",list[i]);
}