// 1. Replace All Negative Numbers with Zero
// A basic array manipulation problem that introduces conditional element modification.

// Given an array nums of size n, replace all negative numbers in the array with zero. Return the modified array.

// This problem introduces you to array traversal and conditional modification of elements, which are fundamental skills in array manipulation and data processing.

// Your task: Replace all negative numbers in the array with zero and return the modified array.

// Examples
// Input:

// nums = [-1, 2, -3, 4, 5]
// Output:

// [0, 2, 0, 4, 5]
// Input:

// nums = [0, -5, -10]
// Output:

// [0, 0, 0]
// Input:

// nums = [1, 2, 3, 4]
// Output:

// [1, 2, 3, 4]

#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of elements ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
        if(arr[i]<0){
        arr[i]=0;
      }
    }
  for(int j=0;j<n;j++)
    {
    printf("%d ",arr[j]);
    }
  return 0;
}
