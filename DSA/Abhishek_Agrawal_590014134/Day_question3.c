// 3. Find the Second Largest Element
// A problem that teaches about finding extremes in data and handling edge cases.
// Problem Statement: Given an array nums of size n, find the second largest unique element in the array. If it doesn't exist (e.g., all elements are the same), return -1.
// This problem helps you understand extreme value tracking and teaches you to handle edge cases where the expected result may not exist.
// Your task: Find the second largest unique element in the array, or return -1 if it doesn’t exist.
// Examples
// Input: nums = [10, 20, 30, 40] Output: 30
// Input: nums = [5, 5, 5] Output: -1
// Input: nums = [3, 2, 1]
// Output: 2
#include<stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
  int n,num;
  printf("Enter the number of elements of array");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(int j=0;j<n;j++){
  printf("%d ",arr[j]);}
  bubbleSort(arr, n);
  printf("\nSorted array: ");
  for (int k = 0; k < n; k++)
  {
    printf("%d ", arr[k]);
  }
  printf("\n");
  num=arr[0];
  for(int m=0;m<n;m++)
  {
    if(num=!arr[m])
    {
    printf("The second largest element is %d ",arr[n-2]);
    break;
    }
    else
      {
        if(m==n-1)
            {
            printf("-1");
                break;
            }
                continue;
        }
  }
    return 0;
  }

  
